#include <iostream>
using namespace std;

void toh(int n, char src, char helper, char destination){
	// base case
	if(n == 0){
		return; // when disks are not there just return
	}


	// Move n-1 disks from src to helper
	toh(n-1, src, destination , helper);
	// move nth disk from src to destination
	cout << "Take disk "<< n << " from "<< src <<" to "<< destination << endl;
	// Move n-1 disks from helper to destination
	toh(n-1, helper, src, destination);
}


int main(){

	int n = 4;
	
	toh(n, 'A', 'B', 'C');


	return 0;
}
















