#include <iostream>
using namespace std;

int a = -1000; // Global scope outside of all curly brackets
// We can access this variable using Scope resolution operator ::

int main(){

	int a = 1;
	
	if(a > 0)
	{
		int a = 100;

		a++;

		cout << a << endl;
		cout << "Gobal a "<< ::a << endl;
	}	

	cout << a << endl;
	:: a = :: a - 1;
	cout << "Gobal a "<< ::a << endl;



	return 0;
}
















