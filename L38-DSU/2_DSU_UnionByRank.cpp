#include <iostream>
#include <vector>
using namespace std;

class DSU{
public:
	vector<int> parent, rank;
	DSU(int N){
		parent.resize(N+1); // N+1 size ka vector bana diya so that Nth index available ho
		rank.resize(N+1); // N+1 size ka vector bana diya so that Nth index available ho
		create_set();
	}

	void create_set(){
		for (int i = 0; i < parent.size(); ++i)
		{
			parent[i] = i; // initially har koi apna khud hi parent hai	
			rank[i] = 1; // Initially sabki rank 1 hogi
		}
	}

	// 2 leaders ko join karke ek set bana dega
	void union_set(int u,int v){
		int leader_u = find_set(u);
		int leader_v = find_set(v);
	
		if(leader_u != leader_v){
			// Jiski rank jyada vo leader banega
			
			// Agar leader_v ki rank jyada hai toh swap karke leader_u ki hi rank
			// jyada kardo, ab humesha leader_u hi parent banega
			if(rank[leader_v] > rank[leader_u]){
				swap(leader_u, leader_v);
			}

			parent[leader_v] = leader_u;

			// Jab do same rank wale join honge toh rank increase karegi 
			if(rank[leader_u] == rank[leader_v]){
				rank[leader_u]++;
			}
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
















