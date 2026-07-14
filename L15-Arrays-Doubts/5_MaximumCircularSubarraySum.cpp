#include <iostream>
#include <climits>
using namespace std;

int kadanes(int *a,int n){
	int ans = 0, sum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += a[i];

		if(sum < 0) {
			sum = 0;
		}

		ans = max(ans, sum);
	}

	return ans;
}

int arraySum(int *a,int n){
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}

	return ans;
}

int maxElement(int *a,int n){

	int mx = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		mx = max(mx, a[i]);
	}
		
	return mx;
}


int main(){

	int a[100005],n;
	int t;cin>>t;
	while(t--){

		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		int mx = maxElement(a,n);

		if(mx < 0){
			cout << mx <<endl;
			continue;
		}

		int op1 = kadanes(a,n);

		int totalSum = arraySum(a,n);
		// 1. Flip all sign
		for (int i = 0; i < n; ++i)
		{
			a[i] = -a[i];
		}

		// Find minSum
		int minSum = kadanes(a,n);

		int op2 = totalSum + minSum;

		cout << max(op1, op2) << endl;


	}




	return 0;
}
















