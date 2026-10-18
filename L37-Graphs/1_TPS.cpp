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

	void tps_helper(string node, map<string,bool> &visited, list<string> &ans){
		visited[node] = true;
		// Pehle saare bacho ka kaam karo
		for(auto ch: adj[node]){
			if(!visited[ch]){
				tps_helper(ch, visited, ans);
			}
		}

		ans.push_front(node); // last mei node ko front mei insert kardo
	}

	void topologicalSort(){
		list<string> ans;
		map<string, bool> visited;

		for(auto p: adj){
			if(!visited[p.first]){
				tps_helper(p.first, visited, ans);
			}
		}

		for(auto e: ans){
			cout << e << " ";
		}
		cout << endl;
	}
};

int main(){

	Graph g;
	g.addEdge("C++","DSA",false);
	g.addEdge("Java","DSA",false);
	g.addEdge("DSA","Web",false);
	g.addEdge("Web","DevOps",false);
	g.addEdge("Python","DevOps",false);
	g.addEdge("Python","ML",false);
	g.addEdge("DSA","Python",false);

	g.topologicalSort();
	


	return 0;	
}
















