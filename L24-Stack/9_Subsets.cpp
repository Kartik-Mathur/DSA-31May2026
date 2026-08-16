#include <iostream>
using namespace std;
int cnt = 0;
void subsets(int *a,int i,int *op,int j,int target, int n, int sum = 0){

	if(i == n){
		if(sum == target){
			// print the op array
			for (int k = 0; k < j ; ++k)
			{
				cout << op[k] << ' ';
			}
			cout << ' ';
			cnt++;
		}
		return;
	}

	op[j] = a[i];
	subsets(a, i+1, op, j+1, target, n,sum+a[i]);

	subsets(a, i+1, op, j, target, n,sum);
}

int main(){

	int a[10000], op[10000];
	int n, target;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cin>>target;

	subsets(a,0,op, 0,target,n);
	cout << endl << cnt<<endl;

	return 0;
}
















