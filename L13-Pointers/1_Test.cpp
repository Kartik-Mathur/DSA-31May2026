#include <iostream>
using namespace std;

int main(){

	int a = 1;
	float f = 1.11;
	bool b = true;
	double d = 10.23;
	char ch = 'A';


	cout << &a << endl; // address of a: 0x16d16af28
	cout << sizeof(&a) << endl;

	cout << &f << endl; 
	cout << sizeof(&f) << endl;

	cout << &b << endl; 
	cout << sizeof(&b) << endl;

	cout <<"&ch: "<<&ch<<endl;

	// In order to print the address of character array
	// We need to fool the compiler
	cout << "&ch: " << (int*)&ch << endl;
	cout << "&ch: " << (void*)&ch << endl;


	return 0;
}
















