#include <iostream>
#include <list>
#include <queue>
#include <map>
using namespace std;

template<typename T>
class Graph{
public:	
	map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true){
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

	void bfs(T src, T des){
		queue<T> q;
		map<T, bool> visited;
		map<T, int> distance;
		map<T, T> parent;

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
		
		cout << "Min Dice moves : "<<distance[des]<<endl;
		while(des != parent[des]){
			cout << des << " <-- ";
			des = parent[des];
		}
		cout << des << endl;	
	}
};

int main(){	

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	Graph<int> g;	
	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice;
			v += board[v];
			g.addEdge(u,v,false);
		}
	}
		
	g.bfs(0,36);


	return 0;	
}
















