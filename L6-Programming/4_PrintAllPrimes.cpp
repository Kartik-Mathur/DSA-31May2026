#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		


	int num,n,i;
	cin>>num;


	for(n = 2 ; n <= num ; n++){
		// If n is prime tabhi print karo else nhi kro

		// Logic likho to check n is prime or not
		for(i = 2 ; i < n ; i++){
			if(n%i == 0){
				break;
			}
		}


		// if n is prime then print it else ignore it
		if(i == n){
			cout << n << endl;
		}
	}



	return 0;
}
















