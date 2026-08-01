#include <iostream>
using namespace std;

int *createArray(int n){
	int *arr = new int[n];

	return arr;
}

int main(){

	int *a = createArray(10);

	delete []a;
	return 0;
}
















