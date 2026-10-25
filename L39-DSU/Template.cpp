#include <bits/stdc++.h>
using namespace std;

#define 	ll long long int
#define 	new(a,n) ll*a = new ll[n]
#define 	new1(a,n,m) ll**a = new ll*[n]; for(ll i = 0 ; i < n ; i++) a[i] = new ll[m];
#define 	mp make_pair
#define 	pb push_back
#define 	fi first
#define 	pii pair<ll,ll>
#define 	si second
#define 	fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define 	F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define 	F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define 	P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define 	P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define 	NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define 	NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define 	PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define 	PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define 	init(a,n,v) for(int i = 0 ; i <n ; i++) a[i]=v;
#define 	init2(a,n,m,v) for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){a[i][j]=v;}}
#define 	w(t) int t;cin>>t;while(t--)
#define 	f(n) for(int __i=0;__i<n;__i++)
#define 	AS 200001
#define 	mod 1000000007

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

	void union_set(string u,string v){
		string leader_u = find_set(u);
		string leader_v = find_set(v);
	
		if(leader_u != leader_v){
			if(size[leader_v] > size[leader_u]){
				swap(leader_u, leader_v);
			}

			parent[leader_v] = leader_u;
			size[leader_u] += size[leader_v];
		}
	}

	string find_set(string u){
		if(parent[u] == u){
			return u; 
		}

		return parent[u] = find_set(parent[u]);
	}


	bool isCyclic(vector<pair<string,string> > edges){
		for(auto edgePair : edges){ 
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


void solve(){
	
}

int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;
}











