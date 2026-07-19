#include <iostream>
using namespace std;

int sumOfArray(int *a,int n){
	if(n == 0){
		return 0; // array khali hai toh sum 0 hi hoga
	}

	return a[0] + sumOfArray(a+1, n-1);
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	cout << sumOfArray(a,n)<<endl;

	return 0;
}
















