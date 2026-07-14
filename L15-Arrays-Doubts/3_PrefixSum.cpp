#include <iostream>
using namespace std;

void calculatePrefix(int *ps,int n,int *a){
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
		ps[i] = ans;
	}
}

void printArray(int *a,int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	int ps[1000];
	
	calculatePrefix(ps, n, a);	
	printArray(ps, n);


	int max_ans = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			int ans;
			if(i-1>=0){
				ans = ps[j] - ps[i-1];
			}
			else{
				ans = ps[j]; // i-1 will be negative index ps[i-1] galat hoga
			}

			max_ans = max(max_ans, ans);
		}
	}

	cout << "Maximum Subarray sum: "<< max_ans<<endl;
	

	return 0;
}
















