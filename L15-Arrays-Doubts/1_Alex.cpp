#include <iostream>
using namespace std;
#define ll long long

ll n;
ll amount,k;

bool canBuy(ll *price){
	ll cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if(amount % price[i] == 0){
			cnt++;
		}

		if(cnt >= k){
			return true;
		}
	}

	return false;
}


int main(){

	cin>>n;
	ll price[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>price[i];
	}

	int t; cin>>t;

	while(t--){
		cin>>amount>>k;

		// Corner case
		if(amount == 0){
			cout << "No\n";
			continue;
		}

		bool ans = canBuy(price);
		if(ans == true){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}

	return 0;
}
















