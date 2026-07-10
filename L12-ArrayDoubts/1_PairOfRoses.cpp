#include <iostream>
#include <algorithm>
using namespace std;
int n;
int price[10005], amt;

void roses(){
	int i = 0, j = n-1;
	int r1,r2;
	while(i<j){

		if(price[i] + price[j] == amt){
			r1 = price[i];
			r2 = price[j];
			i++;
			j--;
		}
		else if(price[i] + price[j] > amt){
			j--;
		}
		else{
			i++;
		}
	}

	cout <<"Deepak should buy roses whose prices are "<<r1<<" and "<<r2<<".\n";
}

int main(){

	int t;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		cin>>n;

		for (int i = 0; i < n; ++i)
		{
			cin>>price[i];
		}
		cin>>amt;

		sort(price, price+n);
		roses();
	}

	return 0;
}
















