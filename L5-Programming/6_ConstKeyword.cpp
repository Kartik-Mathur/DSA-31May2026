#include <iostream>
using namespace std;

int main(){

	const float pi = 3.14;

	// Neeche wala error dega as we are providing garbage
	// value to const variable that is not allowed....
	// const float pi;
	// pi = 3.14;

	// pi = pi + 1; // We should not allow this as yeh galat h
	cout << pi << endl;

	return 0;
}
















