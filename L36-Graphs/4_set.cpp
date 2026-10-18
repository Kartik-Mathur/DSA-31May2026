#include <iostream>
#include <set>
using namespace std;

int main(){

	set<int> s;
	s.insert(2); // O(logN)
	s.insert(4);
	s.insert(4);
	s.insert(1);
	s.insert(3);	
	s.insert(4);

	// Set mei data is sorted and set doesn't allow duplicate values...
	auto x = s.find(41); // O(logN)
	if(x != s.end()){
		cout << "Mill gaya : "<<*x<<endl;
	}
	else{
		cout << "Nahi Milla"<<endl;
	}

	while(!s.empty()){
		// s.begin() -> Address deta hai
		cout << *(s.begin()) << " ";

		s.erase(s.begin()); // O(logN)
	}	
	cout << endl;



	return 0;
}
















