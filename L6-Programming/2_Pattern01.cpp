#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int n;
	cin>>n;

	int row,i,no;

	for(row = 1 ; row <= n ; row++){
		// We write the logic for a row
		// 1. Find kaha se no print hona start hoga
		if(row % 2 == 0){
			no = 0;
		}
		else{
			no = 1;
		}

		// 2. Print karo row times number and keep toggling it
		for(i = 1 ; i <= row ; i++){
			cout << no << " ";
			no = 1 - no; // toggle
		}

		cout << '\n';
	}

	return 0;
}
















