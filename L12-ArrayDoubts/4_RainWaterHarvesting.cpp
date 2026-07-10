#include <iostream>
using namespace std;
int a[100005];
int leftMax[100005];
int rightMax[100005];
int n;

void rainWater(){

	int ans = a[0];
	leftMax[0] = 0;
	for (int i = 1; i < n; ++i)
	{
		leftMax[i] = ans;
		ans = max(ans, a[i]);
	}

	// Find right max
	ans = a[n-1];
	rightMax[n-1] = 0;

	for(int i = n-2; i>=0 ; i--){
		rightMax[i] = ans;
		ans = max(ans, a[i]);
	}


	int water = 0;

	for (int i = 0; i < n; ++i)
	{
		int minHeight = min(leftMax[i], rightMax[i]);
		if(minHeight - a[i]>0){
			water += (minHeight - a[i]);
		}
	}

	cout << water<<endl;
}


int main(){
	 

	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}	

	rainWater();

	return 0;
}
















