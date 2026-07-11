#include <iostream>
using namespace std;

void print(int *a,int n){

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	a = NULL;

}

int main(){

	int arr[] = {1, 2, 3};
	int n = sizeof(arr)/sizeof(int);


	print(arr,n);




	return 0;
}
















