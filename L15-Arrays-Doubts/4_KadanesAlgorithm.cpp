#include <iostream>
using namespace std;

int main(){

	// int a[] = {1, 2, -5, 6, 7, -3, 2, -11, 10};
	int a[] = {-1, -3, -5, -4};
	int n = sizeof(a)/sizeof(int);

	int mx = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		mx = max(mx, a[i]);
	}
		
	// Agar maximum element hi negative hai that means saare elements
	// -ve hi honge


	if(mx < 0){
		// If saare hi elements negative hai toh
		// inmei largest would be my answer
		cout << mx << endl;
	}
	else{
		int ans = 0, sum = 0;

		for (int i = 0; i < n; ++i)
		{
			sum += a[i];

			if(sum < 0) {
				sum = 0;
			}

			ans = max(ans, sum);
		}

		cout << ans << endl;

	}


	

	return 0;
}
















