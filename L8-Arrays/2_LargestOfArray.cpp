#include <iostream>
#include <climits>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	int a[1000];
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int ans = INT_MIN; // -2^31

	for (int i = 0; i < n; ++i)
	{
		if(a[i] > ans){
			ans = a[i];
		}
	}

	cout << "Largest: "<<ans<<endl;

	return 0;
}
















