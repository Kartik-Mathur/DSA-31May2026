#include <iostream>
using namespace std;

int main(){
	 
	int no;
	cin>>no;
	int odd=0,even=0;

	int pos = 1;
	while(no>0){
		if(pos%2 == 1) {
			odd += no%10;
		}
		else{
			even += no%10;
		}
		
		pos++;
		no/=10;		
	}
	cout << odd << endl<<even<<endl;

	return 0;
}
















