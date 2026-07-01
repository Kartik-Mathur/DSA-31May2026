#include <iostream>
#include <climits>
using namespace std;

int main(){

	int a,b;
	cin>>a>>b;

	int hcf = 1;
	for (int i = 2; i <= min(a,b); ++i)
	{
		if(a%i ==0 and b%i == 0){
			hcf = i;
		}
	}

	cout << (a*b)/hcf << endl;

	return 0;
}
















