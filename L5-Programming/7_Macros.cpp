#include <iostream>
using namespace std;

// Generally Macros are kept all caps, so that we can differentiate
// variable hai ya Macro hai
#define PI (3.14 + 1)


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif	

	cout << 2 * PI * 1 << endl;	

	return 0;
}
















