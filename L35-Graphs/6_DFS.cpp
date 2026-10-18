#include <iostream>
#include <list>
#include <map>
using namespace std;

class Graph{
public:	
	map<string, list<string> > adj;

	void addEdge(string u, string v, bool bidir = true){
		adj[u].push_back(v);
		if(bidir){
			adj[v].push_back(u);
		}
	}

	void print(){
		for(auto p: adj){
			cout << p.first << " : ";
			for(auto ch: p.second){
				cout << ch << ", ";
			}
			cout << endl;
		}
	}

	void dfs_helper(string src, map<string, bool> &visited){	
		cout << src << " ";
		visited[src] = true;

		for(auto ch: adj[src]){
			if(!visited[ch]){
				dfs_helper(ch, visited);
			}
		}
	}

	void dfs(string src){
		map<string, bool> visited;
		dfs_helper(src, visited);
	}
};

int main(){

	Graph g;
	g.addEdge("0","1");
	g.addEdge("0","4");
	g.addEdge("2","1");
	g.addEdge("2","4");
	g.addEdge("2","3");
	g.addEdge("5","3");
	g.addEdge("3","4");

	// map<string, bool> visited;
	// g.dfs("0", visited);

	// I want this to run like
	g.dfs("0");


	return 0;	
}
















