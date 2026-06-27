#include <iostream>
using namespace std;

int main(){

	int spaces = 0, alpha = 0, digits = 0, special = 0;

	char ch;
	ch = cin.get();
	while(ch != '$'){
		if(ch >= '0' and ch <= '9'){
			digits ++;
		}
		else if(ch == ' ' || ch == '\n' || ch == '\t'){
			spaces ++;
		}
		else if( (ch >= 'a' and ch <= 'z') || (ch >='A' and ch <= 'Z') ){
			alpha++;
		}
		else{
			special++;
		}

		ch = cin.get();		
	}

	cout << "alpha : "<<alpha<<endl;
	cout << "digits : "<<digits<<endl;
	cout << "spaces : "<<spaces<<endl;
	cout << "special : "<<special<<endl;

	return 0;
}
















