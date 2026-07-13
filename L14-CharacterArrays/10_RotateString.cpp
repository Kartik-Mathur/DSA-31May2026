#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void rotateString(char *a,int n){
	int lena = strlen(a);
	n = n % lena;

	reverse(a, a+lena);

	reverse(a, a+n);

	reverse(a+n, a+lena);
}

int main(){

	char a[] = "Coding";

	rotateString(a, 3544);
	cout << a <<endl;

	return 0;
}
















