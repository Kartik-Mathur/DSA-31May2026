#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

int main(){

	unordered_map<string, list<string> > h;	

	h["Parth"].push_back("CPP");
	h["Parth"].push_back("Python");
	h["Areeb"].push_back("Python");
	h["Areeb"].push_back("Web");
	h["Areeb"].push_back("DS");

	for(auto x: h){
		cout << x.first << " : ";

		for(auto s: x.second){
			cout << s <<", ";
		}
		cout << endl;
	}


	return 0;
}
















