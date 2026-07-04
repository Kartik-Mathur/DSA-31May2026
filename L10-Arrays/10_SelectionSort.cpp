#include <iostream>
using namespace std;

void selectionSort(int a[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		int mi = i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[j] < a[mi]) {
				mi = j;
			}
		}

		swap(a[i], a[mi]);
	}
}

void printArray(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main(){

	int a[] = {5,4,1,2,3};
	int n = sizeof(a)/sizeof(int);
	
	cout << "Array before sorting : ";
	printArray(a,n);
	
	selectionSort(a,n);

	cout << "Array after sorting : ";
	printArray(a,n);

	return 0;
}
















