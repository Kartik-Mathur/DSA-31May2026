#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	char ch;
	cin>>ch;

	switch(ch){
	case 'N':
	case 'n':
		cout << "North\n";
		break;
	case 'E':
	case 'e':
		cout << "East\n";
		break;
	case 'S':
	case 's':
		cout << "South\n";
		break;
	case 'W':
	case 'w':
		cout << "West\n";
		break;
	default :
		cout << "Invalid input\n";
	}

	return 0;
}
















