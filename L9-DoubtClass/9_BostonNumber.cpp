#include <iostream>
using namespace std;

int main(){

	int no;
	cin>>no;
	int digitSum = 0;

	int x = no;
	while(x>0){
		digitSum += x%10;

		x/=10;
	}

	int factorSum = 0;
	// Prime factors
	int f = 2;
	while(f<=no){

		while(no % f == 0){

			int x = f;
			while(x>0){
				factorSum += x%10;

				x/=10;
			}	

			no/=f;
		}
		

		f++;	
	}

	if(no > 1){

		int x = no;
		while(x>0){
			factorSum += x%10;

			x/=10;
		}
	}

	if(digitSum == factorSum){
		cout << 1 << endl;
	}
	else{
		cout << 0 << endl;
	}

	return 0;
}
















