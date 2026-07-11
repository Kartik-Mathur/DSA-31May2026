#include <iostream>
using namespace std;

void pairSum(int a[],int n,int X){
	
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n ; ++j)
		{
			if(a[i] + a[j] ==  X){
				cout << a[i] <<", "<<a[j]<<endl;
			}
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		 
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	pairSum(a,n,5);


	return 0;
}
















