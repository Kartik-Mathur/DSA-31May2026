#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

class Graph {
public:
	map<string, list<pair<string, int> > > adj;

	void addEdge(string u, string v, int d, bool bidir = false) {
		adj[u].push_back(make_pair(v, d));
		if (bidir) {
			adj[v].push_back({u, d});
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto n : p.second) {
				cout << "(" << n.first << ", " << n.second << ")";
			}
			cout << endl;
		}
	}

	void splitwise() {
		unordered_map<string, int> money;

		for (auto p : adj) {
			for (auto child_pair : p.second) {
				if (money.count(p.first) == 0) {
					money[p.first] = -1 * child_pair.second;
				}
				else {
					money[p.first] += -1 * child_pair.second;
				}

				if (money.count(child_pair.first) == 0) {
					money[child_pair.first] = child_pair.second;
				}
				else {
					money[child_pair.first] += child_pair.second;
				}
			}
		}
		/*
		for (auto p : money) {
			cout << p.first << "-> " << p.second << endl;
		}
		*/
		

		// multiset mei saara data insert karo {amount, name}
		multiset<pair<int, string> > s;
		for (auto p : money) {
			s.insert({p.second, p.first});
		}

		for(auto p: s){
			cout << p.first<<", "<<p.second<<endl;
		}

		while (!s.empty()) {
			// Shuru ka pair uthaya isse sabse jyada paise dene hai
			auto front = *s.begin();
			// End ka pair uthaya isse sabse jyada paise lene hai
			auto end = *prev(s.end());

			s.erase(s.begin()); // Dono ko set se hatado, transaction karo  and dekho 
			// dobara insert hoga yeh ya nhi hoga insert set ke andar
			s.erase(prev(s.end()));
			// isse sabse jyada paise dene hai
			int front_amount = front.first;
			string front_name = front.second;
			// isse sabse jyada paise lene hai
			int end_amount = end.first;
			string end_name = end.second;

			int settlement_amount = min(-1 * front_amount, end_amount);

			front_amount += settlement_amount;
			end_amount -= settlement_amount;
			cout << front_name << " --> " << end_name << " paid: " << settlement_amount << endl;
			if (front_amount) {
				s.insert({front_amount, front_name});
			}

			if (end_amount) {
				s.insert({end_amount, end_name});
			}
		}
	}

};

int main() {
	Graph g;
	g.addEdge("Aadeep", "Agrim", 1000);
	g.addEdge("Agrim", "Anurag", 200);
	g.addEdge("Niyati", "Aadeep", 1100);
	g.addEdge("Harman", "Niyati", 500);
	g.addEdge("Aryan", "Agrim", 800);
	// g.print();
	g.splitwise();


	return 0;
}
















