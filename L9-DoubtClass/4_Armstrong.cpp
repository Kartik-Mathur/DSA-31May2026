#include <iostream>
#include <cmath> // for using pow inbuilt function
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int no;
	cin>>no;

	int x = no;
	int d = 0;

	while(x > 0){
		d++;
		x/=10;
	}

	int ans = 0;
	x = no;
	while(x>0){
		int ld = x%10;
		ans += pow(ld, d);
		x/=10;
	}

	if(ans == no){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}

	return 0;
}
















