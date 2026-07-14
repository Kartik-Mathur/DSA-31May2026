#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a)/sizeof(int);

	int max_ans = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			int ans = 0;
			// [i,j] index ke beech wala subarray print kardo
			for (int k = i; k <= j; ++k)
			{
				// cout << a[k] << " ";
				ans += a[k];
			}

			// ans yeh store krega sum of indexes [i, j]
			// cout << ", Sum: "<<ans<< endl;
			max_ans = max(max_ans, ans);
		}
	}

	cout << "Maximum Subarray sum: "<< max_ans<<endl;



	return 0;
}
















