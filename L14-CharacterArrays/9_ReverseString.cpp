#include <iostream>
#include <cstring>
#include <algorithm> // reverse
using namespace std;

void reverseString(char *a){
	int lena = strlen(a);
	int i = 0, j = lena - 1;

	while(i<j){
		swap(a[i], a[j]);
		i++;
		j--;
	}
}

int main(){

	char a[] = "Hello";

	// reverseString(a);
	reverse(a, a+strlen(a));// inbuilt function

	cout << a << endl;

	return 0;
}
















