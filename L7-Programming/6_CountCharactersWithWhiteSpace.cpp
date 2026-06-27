#include <iostream>
using namespace std;

int main(){
	int cnt = 0;
	char ch;

	ch = cin.get(); // Initialisation of ch bucket

	while(ch != '$'){ // Condition check

		cnt++;

		ch = cin.get(); // Updation
	}

	cout << "Total characters : "<< cnt << endl;

	return 0;
}
















