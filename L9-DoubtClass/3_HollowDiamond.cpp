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
		if(row == 1){
			// Print n stars
			for (int i = 0; i < n; ++i)
			{
				cout << "*\t";
			}
		}
		else{
			// Print (n-2row+3)/2 stars
			for (int i = 0; i < (n-2*row+3)/2; ++i)
			{
				cout << "*\t";
			}
			// Print (2row-3) spaces
			for (int i = 0; i < 2*row-3; ++i)
			{
				cout << " \t";
			}
			// Print (n-2row+3)/2 stars
			for (int i = 0; i < (n-2*row+3)/2; ++i)
			{
				cout << "*\t";
			}
		}
		cout << endl;
	}


	// Pattern mirror
	for (int row = (n+1)/2-1; row >=1; --row)
	{
		if(row == 1){
			// Print n stars
			for (int i = 0; i < n; ++i)
			{
				cout << "*\t";
			}
		}
		else{
			// Print (n-2row+3)/2 stars
			for (int i = 0; i < (n-2*row+3)/2; ++i)
			{
				cout << "*\t";
			}
			// Print (2row-3) spaces
			for (int i = 0; i < 2*row-3; ++i)
			{
				cout << " \t";
			}
			// Print (n-2row+3)/2 stars
			for (int i = 0; i < (n-2*row+3)/2; ++i)
			{
				cout << "*\t";
			}
		}
		cout << endl;
	}

	return 0;
}
















