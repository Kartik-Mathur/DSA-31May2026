#include <iostream>
using namespace std;

int main(){

	int n, pT, nT, R,N;
	cin>>n;

	for(N = 0 ; N <= n-1 ; N++){
		// Jo bhi pehla 
		pT = 1;
		
		cout << pT << '\t'; // Pehle wala 1 print kardo
		for(R = 1 ; R<= N; R++){
			nT = pT * (N-R+1)/R;
			pT = nT;
			cout << nT << '\t';
		}

		cout << endl;
	}

	return 0;
}
















