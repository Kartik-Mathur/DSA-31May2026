#include <iostream>
#include <map>
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
};

int main(){

	Graph g;

	g.addEdge("A","B", 1);
	g.addEdge("C","B", 2);
	g.addEdge("A","C", 5);
	g.addEdge("D","C", 3);
	g.addEdge("A","D", 4);

	g.print();

	return 0;
}
















