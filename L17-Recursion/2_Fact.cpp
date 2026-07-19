#include <iostream>
using namespace std;
/*
int fact(int n){
	// base case
	if(n == 0){
		return 1;
	}

	// choti problem
	int choti = fact(n-1); // assumption

	// badi problem
	return n * choti; // using choti problem humne n! nikal lia
}
*/


int fact(int n){
	// base case
	if(n == 0){
		return 1;
	}

	return n * fact(n-1); 
}

int main(){

	int n;
	cin>>n;

	cout << fact(n) <<endl;

	return 0;
}
















