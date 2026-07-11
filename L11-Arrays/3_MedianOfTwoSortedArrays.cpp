#include <iostream>
using namespace std;

double medianOfSorted(int a[],int b[],int n,int m){
		int s = 0, e = n;
		
		while (s <= e) {
			int mid1 = (s + e) / 2;
			int mid2 = (n + m) / 2 - mid1;
			
			int aleft = (mid1 - 1) >= 0 ? a[mid1 - 1] : INT_MIN;
			int aright = (mid1 < n) ? a[mid1] : INT_MAX;
			int bleft = (mid2 - 1 >= 0) ? b[mid2 - 1] : INT_MIN;
			int bright = (mid2 < m) ? b[mid2] : INT_MAX;

			if (bleft <= aright && aleft <= bright) {
				// We have the correct distribution
				if ((n + m) % 2 == 1) {
					return min(aright, bright);
				}
				else {
					return (max(aleft, bleft) + min(aright, bright)) / 2.0;
				}
			}
			else {
				// We dont have the correct distribution
				if (aleft > bright) {
					e = mid1 - 1;
				}
				else {
					s = mid1 + 1;
				}
			}
		}

		// This will never run because we will always find median
		return -1;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		


	int a[] = {1, 2, 4, 8,11};
	int n = sizeof(a)/sizeof(int);

	int b[] = {3,5,6,9,10};
	int m = sizeof(b)/sizeof(int);

	if(n<m){
		cout << medianOfSorted(a,b,n,m)<<endl;
	}
	else{
		cout << medianOfSorted(b,a,m,n)<<endl;
	}

	return 0;
}
















