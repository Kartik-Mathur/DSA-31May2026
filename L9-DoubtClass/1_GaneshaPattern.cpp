#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int n;
	cin>>n;

	// Printing the upper part of ganesha's pattern
	for (int row = 1; row <= (n+1)/2; ++row)
	{
		if(row == 1){
			cout << '*';

			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}

			for (int i = 0; i < (n+1)/2; ++i)
			{
				cout << '*';
			}
		}
		else if(row == (n+1)/2){
			// Print n stars
			for (int i = 0; i < n; ++i)
			{
				cout << '*';
			}
		}
		else{
			cout << '*';
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}
			cout << '*';
		}

		cout << endl;
	}



	// Printing the lower part of ganesha's pattern
	for (int row = 1; row <= n/2; ++row)
	{
		if(row != n/2){
			// 1. Print (n-1)/2 spaces
			for (int i = 0; i < (n-1)/2; ++i)
			{
				cout << ' ';
			}
			// 2. Print *
			cout << '*';

			// 3. Print (n-3)/2 spaces
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}
			// 4. Print *
			cout << '*';

		}
		else{
			// 1. Print (n+1)/2 stars
			for (int i = 0; i < (n+1)/2; ++i)
			{
				cout << '*';
			}
			// 2. Print (n-3)/2 spaces
			for (int i = 0; i < (n-3)/2; ++i)
			{
				cout << ' ';
			}
			// 3. Print *
			cout << '*';

		}

		cout << endl;
	}
	return 0;
}
















