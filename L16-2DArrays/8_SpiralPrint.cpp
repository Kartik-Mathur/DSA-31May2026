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

void spiralPrint(int a[][4],int rows, int cols){
	int sr = 0, sc = 0, ec = cols - 1, er = rows - 1;

	while(sr <= er and sc <= ec){
		// print sr [sc, ec]
		for (int c = sc; c <= ec ; ++c)
		{
			cout << a[sr][c] << ' ';
		}
		sr++;

		// print ec [sr, er]
		for (int r = sr; r <= er; ++r)
		{
			cout << a[r][ec] << ' ';
		}
		ec--;

		// print er [ec, sc]
		if(sr < er){
			for (int c = ec; c >= sc ; --c)
			{
				cout << a[er][c] << ' ';
			}
			er--;
		}

		// print sc [er, sr]
		if(sc < ec){
			for (int r = er; r >= sr ; --r)
			{
				cout << a[r][sc] << ' ';
			}
			sc++;
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
	spiralPrint(a,rows,cols);


	return 0;
}
















