#include <iostream>
#include <algorithm>
#include <vector> // STL - Standard Template Library
using namespace std;

bool compare(int a,int b){
	return a < b;
}

int main(){
	vector<int> a; // vector is a self growable array
	a.push_back(11);
	a.push_back(21);
	a.push_back(13);
	a.push_back(4);
	a.push_back(5);

	sort(a.begin(), a.end(), compare);
	// a.pop_back(); // will remove the element from end

	// a[2] = 100;
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] <<' ';
	}
	cout << endl;

	cout <<"size: "<<a.size()<<", capacity: "<<a.capacity() <<endl;

	return 0;
}
















