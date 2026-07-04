#include <iostream>
using namespace std;

bool isPrime(int no){
	int i = 2;
	while(i<=no-1){

		if(no%i == 0){
			// Jaise hi pata laga number is not prime 
			return false;
		}

		i = i + 1;
	}

	// Yaha par 100% no is a prime number
	return true;
}

int main(){	 
	int n;
	cin>>n;

	bool ans = isPrime(n);
	if(ans == true){
		cout << "Prime\n";
	}
	else{
		cout << "Not Prime\n";
	}
	return 0;
}
















