#include <iostream>
#include <vector>
using namespace std;

class DSU{
public:
	vector<int> parent, size;
	DSU(int N){
		parent.resize(N+1); // N+1 size ka vector bana diya so that Nth index available ho
		size.resize(N+1); // N+1 size ka vector bana diya so that Nth index available ho
		create_set();
	}

	void create_set(){
		for (int i = 0; i < parent.size(); ++i)
		{
			parent[i] = i; // initially har koi apna khud hi parent hai	
			size[i] = 1;
		}
	}

	// 2 leaders ko join karke ek set bana dega
	void union_set(int u,int v){
		int leader_u = find_set(u);
		int leader_v = find_set(v);
	
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
	int find_set(int u){
		if(parent[u] == u){
			return u; // Yeh hi leader hoga
		}

		// Path compression
		return parent[u] = find_set(parent[u]);
	}
};

int main(){

	DSU d(5);
	d.union_set(4,5);
	cout << d.find_set(5) << endl;
	cout << d.find_set(4) << endl;



	return 0;
}
















