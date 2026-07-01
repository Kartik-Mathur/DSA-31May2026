#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int n;
	cin>>n;

	for (int row = 1; row <= (n+1)/2; ++row)
	{
		for (int i = 0; i < n-2*row+1; ++i)
		{
			cout << "  ";
		}
		int no = row;
		for (int i = 0; i < row; ++i)
		{
			cout << no-- <<" ";
		}

		for (int i = 0; i < 2*row-3; ++i)
		{
			cout << "  ";
		}

		if(row!=1){
			for (int i = 1; i <= row; ++i)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}

	for (int row = (n+1)/2-1; row>=1; --row)
	{
		for (int i = 0; i < n-2*row+1; ++i)
		{
			cout << "  ";
		}
		int no = row;
		for (int i = 0; i < row; ++i)
		{
			cout << no-- <<" ";
		}

		for (int i = 0; i < 2*row-3; ++i)
		{
			cout << "  ";
		}

		if(row!=1){
			for (int i = 1; i <= row; ++i)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
















