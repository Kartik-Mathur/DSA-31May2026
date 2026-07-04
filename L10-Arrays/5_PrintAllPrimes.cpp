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

void printAllPrimes(int n){

	for (int i = 2; i <= n; ++i)
	{
		if(isPrime(i) == true){
			cout << i << " ";
		}
	}
}

int main(){	 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		 
	int n;
	cin>>n;

	printAllPrimes(n);
	
	return 0;
}
















