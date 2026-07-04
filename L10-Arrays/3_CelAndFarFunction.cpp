#include <iostream>
using namespace std;

void printTable(int init, int fval, int step){
	int far, cel;

	far = init; // initialisation
	while( far <= fval){ // condition check
		cel = 5*(far - 32)/9;
		cout << far << " "<< cel << '\n';
		far = far + step; // updation
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 
	
	int init, fval, step;
	cin >> init >> fval >> step;
	printTable(init, fval, step);
	
	cout << endl;
	printTable(0, 50, 15);


	return 0;
}
















