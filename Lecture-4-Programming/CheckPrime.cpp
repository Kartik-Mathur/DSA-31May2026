#include <iostream>
using namespace std;

int main(){

	// 1. Take input of number we need to check
	int n;
	cin>>n;

	// 2. Logic
	int i = 2;
	while(i<=n-1){

		// if n gets divided by any i that means it is not a prime number
		if(n%i == 0){
			cout << "Not prime\n";
			return 0; // exit
		}

		i = i + 1;
	}

	// If you are here that means you loop condition failed thus number will be prime only
	cout << "Prime\n";

	return 0;
}
















	