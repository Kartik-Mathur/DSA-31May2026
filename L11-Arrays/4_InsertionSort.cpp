#include <iostream>
using namespace std;

void insertionSort(int a[],int n){
	int j;

	for (int i = 1; i < n; ++i)
	{
		int pick = a[i];
		for(j = i - 1 ; j>=0 and pick < a[j]; j--){
			a[j+1] = a[j];
		}

		a[j+1] = pick;
	}
}

int main(){
	
	int a[] = {5,4,0,1,2,3};
	int n = sizeof(a)/sizeof(int);

	insertionSort(a,n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] <<  " ";
	}
	cout << endl;


	return 0;
}
















