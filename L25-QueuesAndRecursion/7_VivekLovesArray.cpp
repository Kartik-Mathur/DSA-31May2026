#include <iostream>
using namespace std;
#define int long long

int solve(int *a, int s,int e,int totalSum){
	// base case
	if(s >= e){
		return 0;
	}
	
	if(totalSum % 2 == 1){
		return 0;
	}

	// recursive case
	int sa = 0, ans = 0;
	for (int i = s; i <= e; ++i)
	{
		sa += a[i];
		if(sa == (totalSum/2)){
			int op1 = solve(a, s, i, sa);
			int op2 = solve(a, i+1, e, sa);

			int x = 1 + max(op1, op2);

			ans = max(ans, x);
		}
	}

	return ans;
}

int32_t main(){

	int n;
	int t;
	cin>>t;

	while(t--){
		cin>>n;
		int a[30];

		int totalSum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			totalSum += a[i];
		}

		if(totalSum % 2 == 1){
			cout<< 0 << endl;
		}
		else cout << solve(a, 0, n-1, totalSum) << endl;
	}

	return 0;
}
















