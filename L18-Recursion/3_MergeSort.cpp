#include <iostream>
using namespace std;

void merge(int *a,int *b, int *c,
			int s,int e){
	int mid = (s+e)/2;

	int i = s, j = mid+1, k = s;
	while (i<=mid and j<=e){
		if(b[i] < c[j]){
			a[k++] = b[i++];
		}
		else{
			a[k++] = c[j++];
		}
	}

	while(i<=mid){
		a[k++] = b[i++];
	}

	while(j<=e){
		a[k++] = c[j++];
	}
}

void mergeSort(int *a,int s,int e){
	if(s>=e){
		return; // iska matlab ek hi element bacha h
	}

	// divide
	int b[1000], c[1000];
	int mid = (s+e)/2;
	// [s, mid] -> b[]
	for(int i = s; i <= mid ;i++){
		b[i] = a[i];
	}
	// [mid+1, e] -> c[]
	for(int i = mid+1; i <= e ;i++){
		c[i] = a[i];
	}

	// sort
	mergeSort(b, s, mid); // Pure assumption 
	mergeSort(c, mid+1, e); // Pure assumption 
	// merge
	merge(a,b,c,s,e);
}

int main(){

	int a[] = {5,4,2,6,1,38,9,12,13,-1,-2};
	int n = sizeof(a)/sizeof(int);

	mergeSort(a, 0, n-1);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}

	return 0;
}
















