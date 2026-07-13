#include <iostream>
using namespace std;

int sumOfArray(int *a,int n){
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		// ans += *(a+i);
		ans += a[i]; // as *(a+i) == a[i]
	}

	return ans;
}

int main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a)/sizeof(int);


	cout << sumOfArray(a+5,n-5) <<endl;

	return 0;
}
















