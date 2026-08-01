#include <iostream>
#include <vector>
using namespace std;

// void update(vector<int> x){
void update(vector<int> &x){
	// incase of vector we need not pass the size of the vector
	for (int i = 0; i < x.size(); ++i)
	{
		x[i] = -x[i];
	}
}

int main(){

	int n;
	cin>>n;
	
	vector<int> v(n, 10);

	update(v);

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	return 0;
}
















