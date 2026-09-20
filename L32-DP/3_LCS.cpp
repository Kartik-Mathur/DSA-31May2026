#include <iostream>
using namespace std;

int solve(string s1, int n, string s2, int m){
	if(n == 0 or m == 0){
		return 0; // ek bhi string empty ho gai toh LCS will be zero
	}

	if(s1[n-1] == s2[m-1]){
		return 1 + solve(s1, n-1, s2, m-1);
	}
	else{
		return max(
			solve(s1, n-1, s2,m),
			solve(s1, n, s2, m-1)
		);
	}
}

int topDown(string s1, int n, string s2, int m,int dp[][100]){
	if(n == 0 or m == 0){
		return 0; // ek bhi string empty ho gai toh LCS will be zero
	}

	if(dp[n][m]!=-1){
		return dp[n][m];
	}

	if(s1[n-1] == s2[m-1]){
		return dp[n][m]=1 + topDown(s1, n-1, s2, m-1, dp);
	}
	else{
		return dp[n][m] = max(
			topDown(s1, n-1, s2,m, dp),
			topDown(s1, n, s2, m-1, dp)
		);
	}
}

int bottomUp(string s1, int n, string s2, int m){
	int dp[100][100] = {};

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	return dp[n][m];
}

int main(){

	string s1 = "abcdef", s2 = "abcedf";
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << topDown(s1, s1.size(), s2, s2.size(), dp) << endl;
	cout << bottomUp(s1, s1.size(), s2, s2.size()) << endl;
	cout << solve(s1, s1.size(), s2, s2.size()) << endl;

	return 0;
}
















