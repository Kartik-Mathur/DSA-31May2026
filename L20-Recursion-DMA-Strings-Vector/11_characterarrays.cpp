#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char a[] = "hello";

	// a = "world"; // nhi chlega
	strcpy(a,"world");
	strcat(a, "hello");

	cout << a << endl;

	char x[] = "Elephant";
	char y[] = "Turtle";

	/*
	strcmp(x,y) > 0, x > y
	strcmp(x,y) < 0, x < y
	strcmp(x,y) == 0, x == y
	*/

	if(strcmp(x,y) > 0){
		cout << x << " is greater\n";
	}
	else{
		cout << y << " is greater\n";
	}

	return 0;
}
















