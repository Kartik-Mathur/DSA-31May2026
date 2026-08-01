#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n;
	cin>>n;
	// vector<int> v(size, value);
	vector<int> v(n, 10);

	// for (int i = 0; i < n; ++i)
	// {
	// 	v[i] = i + 1;
	// }

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	return 0;
}
















