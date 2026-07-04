#include <iostream>
using namespace std;

void sayHello(){
	cout << "Hello world!!!\n";
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 
	
	sayHello(); // Function invoking or calling
	sayHello(); // Function invoking or calling


	return 0;
}
















