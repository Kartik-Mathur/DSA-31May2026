#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	long long int ans = 1;
	for (int i = 1; i <= 100; ++i)
	{
		ans *= i;
	}
	cout << ans << endl;

	return 0;
}
















