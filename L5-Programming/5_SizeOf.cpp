#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	cout << sizeof(1) << endl;
	cout << sizeof(1.01) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof('A') << endl;

	long long int x;
	cout << sizeof(x) << endl;


	return 0;
}
















