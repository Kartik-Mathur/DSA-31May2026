#include <iostream>
using namespace std;

int main(){

	char a[100];
	// Syntax : cin.getline(array_name, buckets_to_input, delimiter);

	// cin.getline -> Yeh white space characters ka bhi input le
	// leta hai ('\n', ' ', '\t')

	// cin.getline(a, 100); // be default delimiter is '\n'(new line) hota h
	// cin.getline(a, 100, '$'); // here delimiter is '$'
	cin.getline(a, 100, '$'); // here delimiter is '$'

	cout << a << endl;

	return 0;
}
















