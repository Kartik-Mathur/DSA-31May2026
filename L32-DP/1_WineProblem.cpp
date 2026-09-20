#include <iostream>
using namespace std;
// O(2^N)
int solve(int *wine,int l,int r,int day){
	if(l>r){
		return 0;
	}

	int op1 = wine[l]*day + solve(wine, l+1, r, day+1);
	int op2 = wine[r]*day + solve(wine, l, r-1, day+1);

	return max(op1, op2);
}

// O(N^2)
int topDown(int *wine,int l,int r,int day,int dp[][100]){
	if(l>r){
		return 0;
	}

	if(dp[l][r]!=-1){
		return dp[l][r];
	}

	int op1 = wine[l]*day + topDown(wine, l+1, r, day+1, dp);
	int op2 = wine[r]*day + topDown(wine, l, r-1, day+1, dp);

	return dp[l][r]=max(op1, op2);
}

int bottomUp(int *wine,int n){
	int dp[100][100] = {0};

	for (int i = n-1; i >= 0; --i)
	{
		for (int j = i; j < n; ++j)
		{
			int day = n - (j-i);

			int op1 = wine[i]*day + (i+1 < n ? dp[i+1][j] : 0);
			int op2 = wine[j]*day + (j-1 >= 0 ? dp[i][j-1]: 0);

			dp[i][j] = max(op1, op2);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[0][n-1];
}

int main(){	

	int a[] = {2,3,5,1,4};
	int n = sizeof(a)/sizeof(int);

	cout << solve(a, 0, n-1, 1) << endl;
	
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << bottomUp(a, n) << endl;
	cout << topDown(a, 0, n-1, 1, dp) << endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
















