#include <iostream>
using namespace std;

int a[100005], b[100005];
int n,m;

int maxSumPath(){
	int i = 0, j = 0;
	int sa=0,sb=0, ans = 0;
	while(i< n and j < m){
		if(a[i] == b[j]){
			if(sa>sb) ans += sa;
			else ans += sb;

			ans += a[i];
			i++;
			j++;
			sa = sb = 0;
		}
		else if(a[i]<b[j]){
			sa += a[i];
			i++;
		}
		else{
			sb += b[j];
			j++;
		}
	}

	while(i<n){
		sa += a[i];
		i++;
	}


	while(j<m){
		sb += b[j];
		j++;
	}

	if(sa > sb){
		ans += sa;
	}
	else{
		ans += sb;
	}

	return ans;
}

int main(){

	
	int t;
	cin>>t;

	while(t--)	{
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < m; ++i)
		{
			cin >> b[i];
		}



		cout << maxSumPath() <<endl;
	}



	return 0;
}
















