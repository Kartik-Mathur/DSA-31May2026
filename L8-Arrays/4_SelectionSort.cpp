#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int a[] = {2,3,4,1,5,0};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n-1; ++i)
	{
		int mi = i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[j] < a[mi]) {
				mi = j;
			}
		}

		swap(a[i], a[mi]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
















