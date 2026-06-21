#include <iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		

	cout << 1 + 2 << endl;
	cout << 1 + 2.1 << endl;

	cout << 'A' + 'A' << endl;
	cout << 'A' + 1 << endl;
	char ch = 'A' + 1 ;
	cout << ch << endl;

	cout << 66 << endl;
	cout << (char)66 << endl;
	cout << (int)'C' << endl;

	return 0;
}
















