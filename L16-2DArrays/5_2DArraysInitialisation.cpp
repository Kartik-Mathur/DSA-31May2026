#include <iostream>
using namespace std;

int main(){

	int a[100][100] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int rows = 3, cols = 3;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << ' ';
		}

		cout << endl;
	}

	return 0;
}
















