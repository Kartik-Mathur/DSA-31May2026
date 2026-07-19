#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	// base case
	if(n == 0 or n == 1){
		return true;
	}

	bool chotaSortedHai = isSorted(a+1,n-1); // Pure assumption
	if(a[0] <= a[1] and chotaSortedHai == true){
		return true;
	}
	else{
		return false;
	}
}

bool isSorted2(int *a,int n){
	if(n == 0 or n == 1){
		return true;
	}

	bool chotaSortedHai = isSorted2(a,n-1);
	if(chotaSortedHai == true and a[n-1] > a[n-2]){
		return true;
	}
	else{
		return false;
	}
}

bool isSorted3(int *a,int n,int i){
	if(i == n-1){
		return true;
	}

	if(a[i] < a[i+1] and isSorted3(a,n,i+1) == true){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);


	if(isSorted3(a,n,0)){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	return 0;
}
















