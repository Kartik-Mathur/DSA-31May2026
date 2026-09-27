#include <iostream>
using namespace std;

int stairs(int n, int k){
	int dp[1000] = {};

	dp[0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		int ans = 0;

		for (int j = 1; i-j>=0 and j <= k; ++j)
		{
			ans += dp[i-j];
		}

		dp[i] = ans;
	}

	return dp[n];
}

int nstairs(int n,int k){
	int dp[1000] = {};

	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		if(i-1-k>=0){
			dp[i] = 2*dp[i-1] - dp[i-1-k];
		}
		else{
			dp[i] = 2*dp[i-1];
		}
	}

	return dp[n];	
}


int main(){

	int n,k;
	cin>>n>>k;

	cout << stairs(n,k)<<endl;
	cout << nstairs(n,k)<<endl;

	return 0;
}
















