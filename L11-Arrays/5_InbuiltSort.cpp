#include <iostream>
#include <algorithm> // Inbuilt sort function
using namespace std;

bool compare(int a,int b){
	cout << "Comparing "<<a <<", "<<b<<endl;
	return a < b;
}

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

	// sort(a, a + n); // inbuilt function -> ascending order
	sort(a, a + n, compare); // inbuilt function -> asc or descending order

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















