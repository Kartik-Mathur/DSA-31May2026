#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	
	int n,x=0, ld;
	cout << "Enter a number to reverse: ";
	cin>>n;

	while(n > 0){
		ld = n%10;
		x = x*10 + ld;
		n /= 10;
	}

	cout << "Reversed Number " << x << endl;

	return 0;
}
















