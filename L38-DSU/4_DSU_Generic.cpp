#include <iostream>
#include <vector>
#include <map>
using namespace std;

class DSU{
public:
	map<string,string> parent;
	map<string,int> size;

	void create_set(vector<string> nodes){
		for (int i = 0; i < nodes.size(); ++i)
		{
			parent[nodes[i]] = nodes[i]; // initially har koi apna khud hi parent hai	
			size[nodes[i]] = 1;
		}
	}

	// 2 leaders ko join karke ek set bana dega
	void union_set(string u,string v){
		string leader_u = find_set(u);
		string leader_v = find_set(v);
	
		if(leader_u != leader_v){
			// Jiski size jyada vo leader banega
			
			// Agar leader_v ki size jyada hai toh swap karke leader_u ki hi size
			// jyada kardo, ab humesha leader_u hi parent banega
			if(size[leader_v] > size[leader_u]){
				swap(leader_u, leader_v);
			}

			parent[leader_v] = leader_u;
			size[leader_u] += size[leader_v];
		}
	}

	// leader provide karega
	string find_set(string u){
		if(parent[u] == u){
			return u; // Yeh hi leader hoga
		}

		// Path compression
		return parent[u] = find_set(parent[u]);
	}


	bool isCyclic(vector<pair<string,string> > edges){
		for(auto edgePair : edges){ // O(E)
			auto u = edgePair.first;
			auto v = edgePair.second;

			auto leader_u = find_set(u);
			auto leader_v = find_set(v);

			if(leader_u == leader_v)return true;
			union_set(leader_u, leader_v);
		}

		return false;
	}
};

int main(){

	DSU d;
	vector<string> nodes = {
		"a","b", "c"
	};

	d.create_set(nodes);

	vector<pair<string,string> > edges = {
		{"a","b"},
		{"a","c"},
		// {"c","b"},
	};

	bool isCyclic = d.isCyclic(edges);
	cout << isCyclic << endl;

	// d.union_set("a","b");
	// d.union_set("a","c");
	// d.union_set("b","c");




	return 0;
}
















