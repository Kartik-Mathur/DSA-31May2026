#include <iostream>
using namespace std;

bool isSafe(int board[][100],int row, int col, int n){
	// Pehle column ko check karo
	for (int k = 0; k < row; ++k)
	{
		if(board[k][col] == 1){
			return false;
		}
	}	

	int row_c = row, col_c = col;
	// Check upper right diagonal
	while(row>=0 and col <n){
		if(board[row][col] == 1){
			return false;
		}
		row--;
		col++;
	}

	row = row_c;
	col = col_c;

	// Check upper left diagonal
	while(row>=0 and col >= 0){
		if(board[row][col] == 1){
			return false;
		}
		row--;
		col--;
	}

	// Ab yaha se return true kar denge
	return true; // kyunki ab cell safe koi usse cut nhi kr rha
}


bool nQueen(int board[][100],int n,int row){
	// base case
	if(row == n){
		// This means we have placed n queen on board
		// print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n ; ++j)
			{
				cout << board[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
		return false; // hume answer mill gaya I am still saying nhi milla
		// recursion will keep working in this case
		// return true; // saari queen place ho gai toh kaam ho gaya "return true"
	}

	// recursive case
	// 1. current row ke har column par mei queen rakhne ka try krunga
	//    agar ek bhi column mei queen place ho gai toh return true

	for(int col = 0; col < n ; col++){
		// mera curent position is row, col. Iss par queen pehle check karo rakh skte h?
		if(isSafe(board,row,col,n) == true){
			// Agar current cell ko koi aur queen cut nhi kar rhi tabhi I can place queen
			// if rakh skte hai toh rakh denge and baaki rows par recursion ko kahenge queen
			// place karde
			board[row][col] = 1; // queen place kardi

			bool kyaBakiBaatBani = nQueen(board,n,row+1);
			if(kyaBakiBaatBani == true){
				// Agar recursion ne queen place kardi toh "return true", 
				// other wise backtracking karna
				return true;
			}
			// return false nhi kar skte kyunki column ka loop jab khatam hoga toh return
			// false karna hai usse pehle nhi
			board[row][col] = 0; // backtracking
		}
		
	}

	// 2. Agar current row ke kisi bhi column par queen place nhi hoti toh return
	//	  false karna padega..
	return false;
}

int main(){

	int board[100][100] = {};

	int n = 5;

	nQueen(board,n,0);


	return 0;
}
















