#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Edge{
public:
	string u, v;
	int weight;
};

class DSU{
public:
	map<string,string> parent;
	map<string,int> size;

	void create_set(const vector<Edge> &edges){
		for (int i = 0; i < edges.size(); ++i)
		{
			auto u = edges[i].u;
			auto v = edges[i].v;

			parent[u] = u;
			parent[v] = v;
			size[u] = 1;
			size[v] = 1;
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
		for(auto edgePair : edges){ // O(E) -> E is edges.size()
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



bool compare(const Edge &a, const Edge &b){
	return a.weight < b.weight;
}

istream& operator>>(istream &cin, Edge &obj){
	string u, v;
	int wt;
	cin>>u>>v>>wt;
	
	obj.u = u;
	obj.v = v;
	obj.weight = wt;

	return cin;
}

ostream& operator<<(ostream &cout, Edge &obj){
	cout << obj.u << ", "<<obj.v << " : "<<obj.weight;
	return cout;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	
	vector<Edge> edges; // Edge -> {u, v, weight}

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		Edge obj; // int a;
		cin >> obj;  // cin>>a;
		edges.push_back(obj);
	}
	
	sort(edges.begin(), edges.end(), compare);

	for (int i = 0; i < n; ++i)
	{
		Edge e = edges[i]; // int x = a[i];
		cout << e << endl; // cout << x << endl;
	}


	DSU d;
	d.create_set(edges);

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		Edge e = edges[i];
		auto leader_u = d.find_set(e.u);
		auto leader_v = d.find_set(e.v);
		auto weight = e.weight;

		if(leader_u != leader_v){
			ans += weight;
			d.union_set(leader_u, leader_v);
		}
	}
	cout << "Minimum Weight: "<<ans<<endl;

	// edges.push_back({"A","B",10});
	// edges.push_back({"A","C",1});
	// edges.push_back({"D","C",1});
	// edges.push_back({"D","B",2});
	// edges.push_back({"F","B",1});
	// edges.push_back({"F","E",1});
	// edges.push_back({"D","E",1});
	
	return 0;
}
















