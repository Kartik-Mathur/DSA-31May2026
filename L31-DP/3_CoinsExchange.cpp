#include <iostream>
#include <vector>
using namespace std;

// O(N^Amt)
int solve(int amount, int *coins, int n){
	// base case
	if(amount == 0){
		return 0;
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		int ca = amount-coins[i];

		if(ca >=0 ){
			int x = solve(ca, coins, n);
			if(x != INT_MAX){
				ans = min(ans, x+1);
			}
		}
	}

	return ans;
}


// O(Amt * N)
int topDown(int amount, int *coins, int n, int *dp){
	// base case
	if(amount == 0){
		return 0;
	}	

	if(dp[amount] != -1){
		return dp[amount];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		int ca = amount-coins[i];

		if(ca >=0 ){
			int x = topDown(ca, coins, n, dp);
			if(x != INT_MAX){
				ans = min(ans, x+1);
			}
		}
	}

	return dp[amount] = ans;
}

// O(N*amount)
int bottomUp(int amount, int * coins, int n){
	vector<int> dp(amount + 1, INT_MAX);
	dp[0] = 0;

	for (int amt = 1; amt <= amount; ++amt)
	{
		for (int i = 0; i < n; ++i)
		{
			int ca = amt - coins[i];
			
			if(ca >= 0){
				if(dp[ca] != INT_MAX){
					dp[amt] = min(dp[amt], dp[ca]+1);
				}
			}
		}
	}

	return dp[amount];
}

int main(){

	int amount;
	cin>>amount;
	int coins[] = {1,7,10};
	int n = sizeof(coins)/sizeof(int);
	int dp[10000];
	memset(dp, -1, sizeof(dp));

	cout << bottomUp(amount, coins, n) << endl;
	cout << topDown(amount, coins, n, dp) << endl;
	cout << solve(amount, coins, n) << endl;

	return 0;
}
















