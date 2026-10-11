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

	void bfs(string src, string des){
		queue<string> q;
		map<string, bool> visited;
		map<string, int> distance;
		map<string, string> parent;

		visited[src] = true;
		q.push(src);
		distance[src] = 0;
		parent[src] = src;

		while(!q.empty()){
			auto f = q.front();
			q.pop();

			for(auto ch: adj[f]){
				if(!visited[ch]){
					q.push(ch);
					visited[ch] = true;
					distance[ch] = distance[f] + 1;  
					parent[ch] = f;
				}
			}
		}
		
		for(auto p: distance){
			cout << "Distance from "<<src << " to "<<p.first << " : "<<p.second <<endl;
		}
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

	// g.print();
	g.bfs("0");

	return 0;
}
















