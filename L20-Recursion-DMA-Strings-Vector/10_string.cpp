#include <iostream>
using namespace std;

int main(){

	string x = "Hello";

	x = "world"; // works
	cout << x << endl;

	x += "hello";
	cout << x << endl;

	string a = "elephant";
	string b = "Turtle";

	if(a > b){
		cout << a << " is greater\n";
	}
	else{
		cout << b << " is greater\n";
	}

	// loop
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << '-';
	}
	cout << endl;

	a.push_back('1');
	cout << a << endl;
	a.pop_back();
	cout << a << endl;

	return 0;
}
















