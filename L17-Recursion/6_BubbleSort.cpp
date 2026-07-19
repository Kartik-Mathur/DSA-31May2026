#include <iostream>
using namespace std;

void bubbleSort(int *a,int n,int i){
	if(i == n-1){
		return;
	}

	// Ek element humne sahi jagah rakh diya
	for (int j = 0; j < n - 1 - i ; ++j)
	{
		if(a[j] > a[j+1]){
			swap(a[j], a[j+1]);
		}
	}

	// n-1 elements recursion ko bol diya sort karde (Pure assumption)
	bubbleSort(a,n,i+1);
}

int main(){

	int a[] = {6,5,3,2,4,1};
	int n = sizeof(a)/sizeof(int);

	bubbleSort(a,n,0);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















