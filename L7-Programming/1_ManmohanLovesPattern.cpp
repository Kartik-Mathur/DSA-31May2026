#include <iostream>
using namespace std;

int main(){

	int row, i, val;

	int n;

	cin>>n;

	for(row = 1 ; row <= n ; row++){

		if(row == 1){
			cout << 1;
		}
		else{
			if(row %2 == 0){
				val = 0;
			}
			else{
				val = 1;
			}

			// This logic is for row > 1
			cout << 1;

			// row-2 times value print karo
			for(i = 1 ; i <= row - 2 ; i++){
				cout << val;
			}

			cout << 1;
		}



		cout << endl;
	}

	return 0;
}
















