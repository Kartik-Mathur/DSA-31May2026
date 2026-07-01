#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		 
	int n1,n2;
	int i = 1;	
	int cnt= 0;
	cin>>n1>>n2;
	while(true){
		int newTerm = 3*i + 2;

		if(newTerm%n2 != 0){
			cout << newTerm <<endl;
			cnt++;

			if(cnt == n1) break;
		}

		i++;
	}


	return 0;
}
















