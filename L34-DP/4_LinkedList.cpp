#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){

	list<int> l;

	l.push_back(1);
	l.push_back(12);
	l.push_back(31);
	l.push_back(4);
	l.push_back(5);
	l.push_back(-6);
	l.push_back(7);
	l.push_back(8);

	for(int x : l){
		cout << x << " -> ";
	}	
	cout << endl;
	// Insertion at middle
	int pos = 4;
	// auto it; // ERROR(BINA VALUE DIYE AUTO NHI USE HOGA)
	// list<int> :: iterator it = l.begin();
	auto it = l.begin();
	for(int i = 1 ; i <= pos ; i++){
		it++;
	}

	l.insert(it, 121);


	// l.reverse();

	// list<int> :: iterator it;
	for(auto it = l.begin() ; it != l.end() ; it++){
		cout << *(it) << " --> ";
	}
	cout << endl;

	// Print the reverse LL
	for(auto it = l.rbegin(); it != l.rend() ; it++){
		cout << *(it) << " --> ";
	}
	cout << endl;
	return 0;
}
















