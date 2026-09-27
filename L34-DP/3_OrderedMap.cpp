#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){

	map<string, int> h; // ordered_map mei data is sorted according to key
	// Time complexity : O(logN) for CRUD, Self Balancing Tree

	h.insert(make_pair("Mango", 100));
	h.insert(make_pair("Apple", 120));
	h.insert(make_pair("Kiwi", 150));
	h.insert(make_pair("Pineapple", 80));
	h.insert({"Orange", 200});
	h["Guava"] = 120; // insertion

	for(auto p: h){
		cout << p.first << ", "<<p.second << endl;
	}

	h["Guava"] = 20; // updation
	cout << h["Guava"] << endl; // search

	if(h.count("orange") == 1){
		cout << "YEs\n";
	}
	else{
		cout << "Not present\n";
	}

	return 0;
}
















