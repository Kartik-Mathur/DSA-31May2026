#include <iostream>
using namespace std;

void print2D(int a[][3],int rows, int cols){
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << ' ';
		}

		cout << endl;
	}
}

void rotateArray(int a[][3],int rows, int cols){
	// transpose
	for (int i = 0; i < rows; ++i)
	{
		for (int j = i; j < cols; ++j)
		{
			swap(a[i][j], a[j][i]);
		}
	}

	for (int r = 0; r < rows; ++r)
	{
		int i = 0, j = cols - 1;
		while(i < j){
			swap(a[r][i], a[r][j]);
			i++;
			j--;
		}
	}
}

int main(){

	int a[][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int rows = 3, cols = 3;
	print2D(a, rows, cols);
	rotateArray(a,rows,cols);
	print2D(a, rows, cols);


	return 0;
}
















