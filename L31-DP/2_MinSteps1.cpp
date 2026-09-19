#include <iostream>
using namespace std;

// T.C: O(3^N)
int solve(int n){
	if(n == 1){
		return 0; // 1 se 1 tak jaane ke steps are 0
	}

	int x, y, z;
	x = y = z = INT_MAX;

	if(n%3 == 0){
		x = solve(n/3);
	}
	if(n%2 == 0){
		y = solve(n/2);
	}

	z = solve(n-1);
	return min(x, min(y, z)) + 1;
}

// T.C: O(N)
int topDown(int n, int* dp){
	if(n == 1){
		return 0;
	}

	if(dp[n] != -1){
		return dp[n];
	}

	int x, y, z;
	x = y = z = INT_MAX;

	if(n%3 == 0){
		x = topDown(n/3, dp);
	}
	if(n%2 == 0){
		y = topDown(n/2, dp);
	}

	z = topDown(n-1, dp);
	return dp[n] = min(x, min(y, z)) + 1;
}

// T.C: O(N)
int bottomUp(int n){
	int dp[10000];
	dp[1] = 0;

	for (int i = 2; i <= n; ++i)
	{
		int x, y, z;
		x = y = z = INT_MAX;

		if(i%2 == 0) x = dp[i/2];
		if(i%3 == 0) y = dp[i/3];
		z = dp[i-1];

		dp[i] = min(x, min(y, z)) + 1;
	}

	return dp[n];
}

int main(){

	int n;
	cin>>n;
	int dp[10000];
	memset(dp, -1, sizeof(dp));

	cout << bottomUp(n) << endl;
	cout << topDown(n, dp) << endl;
	cout << solve(n) << endl;

	return 0;
}
















