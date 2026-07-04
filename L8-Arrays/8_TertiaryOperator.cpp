#include <iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	// (condition) ? (on true yeh chlega) : (on false yeh);
	int a = 5;

	(a%2 == 0) ? cout << "Even\n" : cout << "Odd\n";
	
	cout << ((a%2 == 0) ? "Even\n" : "Odd\n");

	return 0;
}
















