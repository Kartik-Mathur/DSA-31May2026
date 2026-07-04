#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	int a[1000];
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int key;
	cin>>key;

	int ans = -1;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] == key){
			ans = i;
			break;
		}
	}

	if(ans == -1){
		cout << "Key not found\n";
	}
	else{
		cout << "Key found at index: "<<ans <<endl;
	}

	return 0;
}
















