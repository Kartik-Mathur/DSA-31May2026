#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int num, n, i, c;
	cin>>num;

	for(n = 2 ; n <= num ; n++){
		c = 0;

		for(i = 2 ; i < n ; i++){
			if(n%i == 0){
				c = 1;
			}
		}

		if(c == 0){
			cout << n << endl;
		}
	}

	return 0;
}
















