#include <iostream>
using namespace std;

/*
int ways(int i,int j){
	if(i == 0 and j == 0){
		return 1;
	}

	if(i < 0 or j < 0){
		return 0;
	}

	int ans = 0;
	for (int k = 0; k <= i - 1; ++k)
	{
		ans += ways(k, j);
	}

	for (int k = 0; k <= j - 1 ; ++k)
	{
		ans += ways(i, k);
	}

	return ans;
}
*/

int ways(int i,int j){
	if(i == 0 and j == 0) return 1;

	if(i < 0 or j < 0) return 0;

	int ans = 0;
	for (int k = 0; k <= i - 1; ++k) ans += ways(k, j);
	for (int k = 0; k <= j - 1 ; ++k) ans += ways(i, k);

	return ans;
}


int main(){

	cout << ways(2,3) << endl;

	return 0;
}
















