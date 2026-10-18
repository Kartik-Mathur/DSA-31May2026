#include <iostream>
#include <map>
#include <set>
#include <list>
using namespace std;

class Graph{
public:
	map<string, list< pair<string, int> > > adj;

	void addEdge(string u, string v, int dist, bool bidir = true){
		adj[u].push_back({v,dist});
		if(bidir){
			adj[v].push_back({u,dist});
		}	
	}

	void print(){
		for(auto p: adj){
			cout << p.first << " : ";
			for(auto chp: p.second){
				cout <<"("<<chp.first<<", "<<chp.second<<") ";
			}
			cout << endl;
		}
	}

	void dijkstras(string src, string des){
		map<string, int> dist;
		map<string, string> parent;
		// Saari nodes ka distance initially infinite kardo
		for(auto p: adj){
			dist[p.first] = INT_MAX;
		}

		dist[src] = 0;
		parent[src] = src;
		set<pair<int, string> > s;
		s.insert({0, src});

		while(!s.empty()){
			auto p = *(s.begin());
			s.erase(s.begin());

			auto x = p.second;
			int cd = p.first;

			// Now iterate on the children of x
			for(auto chp: adj[x]){
				// x ke bache hai yeh jaha hum iterate kar rahe hai
				auto ch = chp.first;
				int ed = chp.second;

				if(dist[ch] > cd + ed){
					// Toh ch tak aane ka chota raasta mill gaya
					auto f = s.find({dist[ch], ch}); // Dekho kya ch already set mei hai?
					// agar hai toh yeh hatana padega set se as we have 
					// chota distance to reach ch now....
					if(f!=s.end()){
						s.erase(f);
					}

					s.insert({cd + ed, ch});
					dist[ch] = cd + ed;
					parent[ch] = x;
				}

			}


		}


		cout << "Min Distance : "<<dist[des]<<endl;
		while(des != parent[des]){
			cout << des << " <-- ";
			des = parent[des];
		}
		cout << des << endl;

	}
};

int main(){

	Graph g;

	g.addEdge("A","B", 1);
	g.addEdge("C","B", 2);
	g.addEdge("A","C", 9);
	g.addEdge("D","C", 3);
	g.addEdge("A","D", 8);

	g.dijkstras("A","D");

	return 0;
}
















