#include <iostream>
#include <cstring> // memset
#include <vector>
using namespace std;

// T.C: O(2^N)
int fibo(int n){
	if(n<=1){
		return n;
	}

	return fibo(n-1) + fibo(n-2);
}

// Time: O(N)
int solve(int n,int *dp){
	if(n<=1){
		return n;
	}

	if(dp[n] != -1){
		return dp[n]; // agar nth fibo already pata hai toh return ans
	}

	int ans = solve(n-1, dp) + solve(n-2, dp);
	dp[n] = ans;
	return ans;
}
// T.C: O(N)
int bottomUp(int n){
	vector<int> dp(n+1);

	// Initialisation
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

int main(){

	int n;
	cin>>n;

	int dp[10000];
	memset(dp, -1, sizeof(dp));
	// for (int i = 0; i < 10000; ++i)
	// {
	// 	dp[i] = -1;
	// }
	cout << solve(n, dp) << endl;
	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















