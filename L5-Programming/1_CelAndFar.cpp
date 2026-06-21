#include <iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	// We need to take init, fval, step from user
	int init, fval, step;
	cin >> init >> fval >> step;

	int far, cel;

	far = init; // initialisation
	while( far <= fval){ // condition check

		// cel = (5/9.0)*(far - 32);
		cel = 5*(far - 32)/9;

		cout << far << " "<< cel << '\n';


		far = far + step; // updation
	}

	return 0;
}
















