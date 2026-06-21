#include <iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	char ch;
	cin>>ch;

	if(ch>='A' and ch <= 'Z'){
		cout << "Uppercase\n";
	}
	else{
		cout << "Lowercase\n";
	}

	return 0;
}
















