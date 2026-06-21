#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int n;
	cin>>n;
	char ch;
	int row, i;

	for(row = 1 ; row <= n ; row++){
		
		ch = 'A';

		// Increasing characters print
		for(i = 1 ; i <= n-row+1 ; i++){
			cout << ch ;
			ch++;
		}


		ch--; // Ek step peeche chale jaao yahi se print honge
		// decreasing characters

		// Decreasing characters print
		for(i = 1 ; i <= n-row+1 ; i++){
			cout << ch ;
			ch--;
		}

		cout << endl;
	}


	return 0;
}
















