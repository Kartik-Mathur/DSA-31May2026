#include <iostream>
using namespace std;

// void printArray(int a[10],int n){
void printArray(int a[],int n){
	
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	
	cout << endl;
}

int main(){

	int a[10] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int); // 10 size hai initialise 5 buckets kari h

	printArray(a, n);





	return 0;
}
















