#include <iostream>
#include <vector>
using namespace std;

class DSU{
public:
	vector<int> parent;
	DSU(int N){
		parent.resize(N+1); // N+1 size ka vector bana diya so that Nth index available ho
		create_set();
	}

	void create_set(){
		for (int i = 0; i < parent.size(); ++i)
		{
			parent[i] = i; // initially har koi apna khud hi parent hai	
		}
	}

	// 2 leaders ko join karke ek set bana dega
	void union_set(int u,int v){
		int leader_u = find_set(u);
		int leader_v = find_set(v);

		if(leader_u != leader_v){
			parent[leader_v] = leader_u;
		}
	}

	// leader provide karega
	int find_set(int u){
		if(parent[u] == u){
			return u; // Yeh hi leader hoga
		}

		// Ask recursion to provide the leader of parent[u]
		return find_set(parent[u]);
	}
};

int main(){


	return 0;
}
















