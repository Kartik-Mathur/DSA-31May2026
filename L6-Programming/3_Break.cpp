#include <iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		

	int i = 1;

	while( i<= 5){

		if(i == 4){
			break;
		}

		cout << i << " ";
		
		i++;
	}

	return 0;
}
















