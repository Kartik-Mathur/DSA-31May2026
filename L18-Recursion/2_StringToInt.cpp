#include <iostream>
using namespace std;

int stringToInt(char *a,int n){
	if(n == 0){
		return 0; // array mei kuch nhi hai toh vo number 0 hi toh hoga
	}

	int ld = a[n-1] - '0';
	int chotaNum = stringToInt(a,n-1);

	return chotaNum * 10 + ld;
}

int main(){

	char a[] = "2134";
	int n = strlen(a);


	int ans = stringToInt(a,n);

	cout << ans + 1 << endl;

	return 0;
}
















