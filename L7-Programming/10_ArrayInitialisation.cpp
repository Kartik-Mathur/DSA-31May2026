#include <iostream>
using namespace std;

int main(){

	int a[] = {1,2,3,4};
	int n = sizeof(a)/sizeof(int);
 	
	// int b[6] = {1,2,3};// will add 0 to all unused buckets
	// int b[6] = {0};// will add 0 to all buckets
	int b[6] = {}; // will add 0 to all buckets
	int m = sizeof(b)/sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < m; ++i)
	{
		cout << b[i] << ' ';
	}

	cout << endl;

	return 0;
}
















