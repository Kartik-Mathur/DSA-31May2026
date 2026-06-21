#include <iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	cout << (5&7) <<endl;
	cout << (5|7) <<endl;

	int no = 1;
	cout << (no << 3) << endl;

	no = 8;

	cout << (no >> 2) << endl;

	return 0;
}
















