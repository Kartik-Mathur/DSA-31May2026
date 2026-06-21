#include <iostream>
using namespace std;

int main(){

	// 1. Create three buckets to take input
	int a,b,c;

	// 2. Take input from user
	cin>>a>>b>>c;

	// 3. Logic
	if(a>=b && a>=c){
		cout << "Largest : "<<a<<'\n';
	}
	else if(b>=a && b>=c){
		cout << "Largest : "<<b<<'\n';
	}
	else{
		cout << "Largest : "<<c<<'\n';
	}

	return 0;
}
















