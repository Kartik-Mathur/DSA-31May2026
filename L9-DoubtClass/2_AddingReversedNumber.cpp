#include <iostream>
using namespace std;
#define ll long long 

int main(){
	

	int t;
	cin>>t;

	while(t--){
		ll a,b;
		cin>>a>>b;
		ll ra = 0, rb=0;
		// Reverse a
		while(a>0){
			int ld = a%10;
			ra = ra*10+ld;

			a = a/10;
		}
		
		// Reverse b
		while(b>0){
			int ld = b%10;
			rb = rb*10+ld;

			b = b/10;
		}
		// Add them
		ll ans = ra+rb;

		// Reverse answer and print it
		ll rans = 0;
		while(ans>0){
			int ld = ans%10;
			rans = rans*10+ld;

			ans = ans/10;
		}

		cout << rans << endl;
	}

	return 0;
}
















