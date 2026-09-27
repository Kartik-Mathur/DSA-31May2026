#include <iostream>
using namespace std;

int solve(string &s1, string &s2, int n,int m, int dp[][100]){
	if(n == 0){
		return m; // s1 mei m characters add krne hai
	}
	if(m == 0){
		return n; // s2 mei n characters delete honge
	}

	if(dp[n][m] != -1){
		return dp[n][m];
	}

	// Recursive case
	if(s1[n-1] == s2[m-1]){
		return dp[n][m] = solve(s1, s2, n-1, m-1, dp);
	}
	else{
		int op1, op2, op3;
		op1 = solve(s1, s2, n-1, m, dp); // deletion
		op2 = solve(s1, s2, n-1, m-1, dp); // updation
		op3 = solve(s1, s2, n, m-1, dp); // insertion 
		return dp[n][m] = min(op1, min(op2,op3)) + 1;
	}
}

int bottomUp(string &s1, string &s2){
	int dp[100][100] = {0};

	for (int i = 0; i <= s1.size(); ++i)
	{
		for (int j = 0; j <= s2.size(); ++j)
		{
			if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else if(s1[i-1] == s2[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				int op1, op2, op3;
				op1 = dp[i-1][j]; // deletion
				op2 = dp[i-1][j-1]; // updation
				op3 = dp[i][j-1]; // insertion 
				dp[i][j] = min(op1, min(op2,op3)) + 1;
			}
		}
	}

	return dp[s1.size()][s2.size()];
}

int main(){

	int dp[100][100];
	memset(dp, -1, sizeof dp);


	string s1 = "sunday", s2 = "saturday";

	cout << solve(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;

	return 0;
}
















