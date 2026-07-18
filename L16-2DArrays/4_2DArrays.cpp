#include <iostream>
#include <cstdlib> // rand()
using namespace std;

int main(){

	int a[100][100];

	int rows,cols;
	cin>>rows>>cols;

/*
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin>>a[i][j];
		}
	}
*/

/*
	int no = 1;
	
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			a[i][j] = no;
			no++;
		}
	}
*/
	int upper = 20, lower = 2;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			int x = (lower + rand()%upper);

			a[i][j] = x;
		}
	}


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
















