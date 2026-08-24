#include <iostream>
#include <vector>
using namespace std;
int cnt = 0;
void print(int *a,int n,int i,vector<int>&b, vector<int> &c,int sb = 0, int sc = 0){
	if(i == n){
		if(sc == sb){
			// print both b[] and c[]
			for (int i = 0; i < b.size(); ++i)
			{
				cout << b[i] << ' ';
			}
			cout << "and ";

			for (int i = 0; i < c.size(); ++i)
			{
				cout << c[i] << ' ';
			}
			cnt++;
			cout << endl;
		}
		return;
	}

	b.push_back(a[i]);
	print(a, n,i+1 , b, c, sb+a[i], sc);
	b.pop_back();


	c.push_back(a[i]);
	print(a, n,i+1 , b, c, sb, sc+a[i]);
	c.pop_back();
}

int main(){

	int a[100000];
	int n;
	cin>>n;
	vector<int> b,c;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}


	print(a,n,0,b,c);
	cout << cnt << endl;
	return 0;
}
















