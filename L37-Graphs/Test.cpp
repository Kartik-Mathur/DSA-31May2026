#include <iostream>
using namespace std;

int main(){

	int no = 10;

	for(int i = 30 ; i >= 0 ; i--){
		cout << (no&(1<<i) ? 1 : 0) << " ";
	}

	return 0;
}
















