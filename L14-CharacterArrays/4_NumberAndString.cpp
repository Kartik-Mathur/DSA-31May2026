#include <iostream>
using namespace std;

int main(){

	char a[100];
	int x;

	cin>>x;
	cin.ignore(); // ' ' or '\n' ko ignore karna hi pdta h

	cin.getline(a, 100);

	cout << "X :"<<x << endl;
	cout << "a :"<<a << endl;

	return 0;
}
















