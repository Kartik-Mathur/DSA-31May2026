#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	int n;
	cin>>n;

	int precision = 3;

	int cp = 1;
	float i = 0;
	float inc = 1;

	while(cp <= precision + 1){
	
		while(i*i<=n){

			i = i + inc;
		}

		i = i - inc;

		inc = inc / 10;

		cp = cp + 1;
	}

	cout << i << endl; // '\n' == endl
	return 0;
}
















