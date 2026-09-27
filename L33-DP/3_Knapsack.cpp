#include <iostream>
using namespace std;

int solve(int *weight, int *price,int n, int capacity){

	if(n == 0 or capacity == 0){
		return 0; // items nhi hai ya capacity khatam toh profit zero hoga
	}


	// Chori karke profit -> nth item ko rob karke
	int choriKeBaadProfit;
	if(capacity >= weight[n-1]){
		choriKeBaadProfit = price[n-1] + solve(weight, price, n-1, capacity-weight[n-1]);
	}
	
	// Chori nahi krke profit -> nth item ko rob na krke
	int choriBinaKiye = solve(weight, price, n-1, capacity);

	return max(choriBinaKiye, choriKeBaadProfit);
}

int topDown(int *weight, int *price,int n, int capacity, int dp[][100]){

	if(n == 0 or capacity == 0){
		return 0; // items nhi hai ya capacity khatam toh profit zero hoga
	}

	if(dp[n][capacity] != -1){
		return dp[n][capacity];
	}

	// Chori karke profit -> nth item ko rob karke
	int choriKeBaadProfit;
	if(capacity >= weight[n-1]){
		choriKeBaadProfit = price[n-1] + topDown(weight, price, n-1, 
			capacity-weight[n-1], dp);
	}
	
	// Chori nahi krke profit -> nth item ko rob na krke
	int choriBinaKiye = topDown(weight, price, n-1, capacity, dp);

	return dp[n][capacity]=max(choriBinaKiye, choriKeBaadProfit);
}

int bottomUp(int *price, int *weight, int N, int capacity){
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int c = 1; c <= capacity; ++c)
		{
			int rob = 0, dontRob=0;
			if(c >= weight[n-1]){
				rob = price[n-1] + dp[n-1][c - weight[n-1]];
			}
			dontRob = dp[n-1][c];

			dp[n][c] = max(rob, dontRob);
		}
	}

	return dp[N][capacity];
}

int main(){

	int price[] = {1, 3, 5, 2};
	int weight[] = {4, 2, 3, 1};

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	int n = sizeof(price)/sizeof(int);
	int capacity = 5;
	cout << solve(weight, price, n, capacity) << endl;
	cout << topDown(weight, price, n, capacity, dp) << endl;
	cout << bottomUp(price, weight, n, capacity) << endl;


	return 0;
}
















