#include <iostream>
#include <stack>
using namespace std;

int main(){

	int a[] = {4, 3, 1, 2, 6, 8, 7, 9};
	int n = sizeof(a)/sizeof(int);
	int ng[10000];

	stack <int> s;

	for (int i = 0; i < n; ++i)
	{
		while(!s.empty() and a[s.top()] < a[i]){
			ng[s.top()] = i;
			s.pop();
		}

		s.push(i);
	}

	while(!s.empty()){
		ng[s.top()] = -1;
		s.pop();
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		if(ng[i] != -1){
			cout << a[ng[i]] << ' ';
		}
		else{
			cout << "-";
		}
	}
	
	return 0;
}
















