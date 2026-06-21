#include <iostream>
using namespace std;

int main(){

	int n, i, no;
	cin>>n;

	no = 1;

	int row = 1;
	while(row <= n){

		// Write a loop that runs row times to print numbers
		i = 1;
		while(i<=row){
			cout << no << " ";
			no = no + 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















