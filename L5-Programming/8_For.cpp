#include <iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		

	int i;

	for(i = 1; i<= 5 ; i++){

		cout << i << " ";
	}

	i = 1;
	for( ; i<= 5 ; ){

		cout << i << " ";

		i++;
	}

	return 0;
}
















