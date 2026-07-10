#include <iostream>
using namespace std;
int a[100005];
int n, targetSum;

void solve(){

	int ans = 0;
	
	for (int no = 0; no <= (1<<n)-1; ++no)
	{

		int sum = 0;

		for (int i = 0; i < n; ++i)
		{
			if((no & (1<<i)) == 0){
				cout << "+"<<a[i]<<" ";
				sum += a[i];
			}
			else{
				sum += -a[i];
				cout << "-"<<a[i]<<" ";
			}
		}
		cout << "SUM: "<<sum << endl;


		if(sum == targetSum){
			ans++;
		}
	}


	cout << ans << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 
	cin>>n >> targetSum;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	solve();

	return 0;
}
















