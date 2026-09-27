#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

int main(){

	unordered_map<string, list<pair<string,int> > > h;	

	h["Parth"].push_back({"CPP", 10});
	h["Parth"].push_back({"Python",10});
	h["Areeb"].push_back({"Python",5});
	h["Areeb"].push_back({"Web",5});
	h["Areeb"].push_back({"DS",5});

	for(auto x: h){
		cout << x.first << " : ";

		for(auto sp: x.second){
			cout << "("<< sp.first <<", " << sp.second<<")";
		}
		cout << endl;
	}


	return 0;
}
















