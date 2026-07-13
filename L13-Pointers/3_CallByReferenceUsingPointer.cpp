#include <iostream>
using namespace std;

void update(int *x){
	*x = *x + 10;
}


int main(){

	int a = 10;

	update(&a);

	cout << "a : "<<a<<endl; // output needed: 20


	return 0;
}
















