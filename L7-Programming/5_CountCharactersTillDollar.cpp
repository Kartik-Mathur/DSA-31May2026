#include <iostream>
using namespace std;

int main(){
	int cnt = 0;
	char ch;

	cin>>ch; // Initialisation of ch bucket

	while(ch != '$'){ // Condition check
		cnt++;

		cin >> ch; // Updation
	}

	cout << "Total characters : "<< cnt << endl;

	return 0;
}
















