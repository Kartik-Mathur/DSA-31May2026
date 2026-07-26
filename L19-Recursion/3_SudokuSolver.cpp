#include <iostream>
using namespace std;

bool isSafe(int mat[][9],int i,int j,int n,int no){
	// row mei and col mei no nhi hona chahiye
	for (int k = 0; k < n ; ++k)
	{
		if(mat[i][k] == no or mat[k][j] == no){
			return false;
		}
	}
	// current box mei no nhi hona chahiye
	n = sqrt(n);
	int si = (i/n) * n;
	int sj = (j/n) * n;

	for (int k = si; k < si+n; ++k)
	{
		for (int l = sj; l < sj+n ; ++l)
		{
			if(mat[k][l] == no){
				return false;
			}
		}
	}

	return true; // agar kahi nhi hai toh safe hai no rakhna
}

bool sudokuSolver(int mat[][9],int i,int j,int n){
	// base case
	if(i == n){
		// We have filled all rows [0, n-1], sudoku solve ho gaya

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n ; ++j)
			{
				cout << mat[i][j] << ' ';
			}
			cout << endl;
		}

		return true;
	}

	if(j == n){
		// agar current row ke saare column fill ho gaye move to next row, col = 0
		return sudokuSolver(mat, i+1, 0, n);
	}
	// recursive case
	// Filled cell aa skta hai
	if(mat[i][j] != 0){
		// filled cell aage puchega jo aaega wahi return kar dega
		return sudokuSolver(mat,i,j+1,n); 
	}
	// Empty cell aa skta hai
	for (int no = 1; no <= n ; ++no)
	{
		if(isSafe(mat, i, j, n, no) == true){
			mat[i][j] = no; // safe hai toh kardo place
			bool kyaBakiSolveHua = sudokuSolver(mat, i, j+1, n);
			if(kyaBakiSolveHua == true){
				return true;
			}

			mat[i][j] = 0; // backtracking kardo
		}
	}

	// [1,n] tak koi bhi number place nhi ho paaya matlab this empty cell cannot be filled
	return false;
}

int main(){


	int mat[9][9]=
	{
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};

	sudokuSolver(mat, 0, 0, 9);

	return 0;
}
















