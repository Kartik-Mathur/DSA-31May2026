#include <iostream>
using namespace std;

void update(int &a){
	a = a + 1;
}

int main(){

	int x = 1;

	cout << "X : "<<x<<endl;
	update(x);
	cout << "X : "<<x<<endl;

	return 0;
}
















