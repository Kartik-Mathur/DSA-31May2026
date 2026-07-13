#include <iostream>
using namespace std;

void takeInput(char *a){
	int i = 0;
	char ch;

	cin>>ch;

	while(ch != '$'){
		a[i] = ch;
		i++;

		cin>>ch;
	}

	a[i] = '\0';
}

void takeInputWhitespace(char *a,int s,char delimiter = '\n'){
	int i = 0;
	char ch;

	ch = cin.get(); // Yeh whitespace characters ka input lega

	while(i < s - 1 and ch != delimiter){
		a[i] = ch;
		i++;

		ch = cin.get();
	}

	a[i] = '\0';
}

int main(){

	char a[100];
	// takeInputWhitespace(a, 100);

	takeInputWhitespace(a, 100, '$');

	cout << a << endl;

	return 0;
}
















