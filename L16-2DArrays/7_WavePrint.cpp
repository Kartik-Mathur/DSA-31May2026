#include <iostream>
using namespace std;

void print2D(int a[][4],int rows, int cols){
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << ' ';
		}

		cout << endl;
	}
}

void wavePrint(int a[][4],int rows, int cols){
	for (int c = 0; c < cols; ++c)
	{	
		if(c % 2 == 0){
			for (int r = 0; r < rows; ++r)
			{
				cout << a[r][c] << ' ';
			}
		}
		else{
			for (int r = rows - 1; r >= 0; --r)
			{
				cout << a[r][c] << ' ';
			}
		}
	}

	cout << endl;
}

int main(){

	int a[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int rows = 3, cols = 4;
	print2D(a, rows, cols);
	wavePrint(a,rows,cols);


	return 0;
}
















