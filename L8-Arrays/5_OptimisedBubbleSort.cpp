#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	
	int a[] = {5,4,3,6,2,1,0};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n-1; ++i)
	{
		int cnt = 0;
		for (int j = 0; j < n-1-i; ++j)
		{
			if(a[j] > a[j+1]){
				// Swap kardo
				swap(a[j],a[j+1]);
				cnt++; // Update the counter after swap
			}
		}

		if(cnt == 0){
			// Koi swapping nhi hui j ke loop mei
			break; // algo stop kardo
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	return 0;
}
















