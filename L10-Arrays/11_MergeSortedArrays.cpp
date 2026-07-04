#include <iostream>
using namespace std;

void merge(int a[],int m,int b[],int n){
	int i = m-1,j=n-1,k=m+n-1;

	while(i >= 0 and j >= 0){
		if(a[i] > b[j]){
			a[k--] = a[i--];
		}
		else{
			a[k--] = b[j--];
		}
	}

	while(j>=0){
		a[k--] = b[j--];
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

	int a[7] = {3,4,6,8};
	int m = 4;

	int b[] = {1,2,5};
	int n = sizeof(b)/sizeof(int);

	merge(a,m,b,n);
	printArray(a,n+m);


	return 0;
}
















