#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5],int sol[][10],int i,int j,int n,int m){
	// base case
	if(i == n-1 and j == m-1){
		sol[i][j] = 1; // destination bhi solution ka part hogi

		// Ab print kardo solution ko as we have reached our destination
		for (int k = 0; k < n ; ++k)
		{
			for (int l = 0; l < m ; ++l)
			{
				cout << sol[k][l] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return true; // as we have reached destination to maze solved 
	}

	// recursive case
	// 1. Assume karlo jis cell par ho vo solution ka part h
	sol[i][j] = 1;
	// 2. Right se dekho maze solve hui
	if(j+1 < m and maze[i][j+1] != 'X'){
		bool kyaRightSeBaatBani = ratInMaze(maze,sol,i,j+1,n,m);
		if(kyaRightSeBaatBani == true){
			return true;
		} // yaha return false nhi hoga because abhi down se bhi check krna h
	}

	// 3. Agar right se nhi hoti then down check karo
	if(i+1<n and maze[i+1][j] != 'X'){
		bool kyaDownSeBaatBani = ratInMaze(maze,sol,i+1,j,n,m);
		if(kyaDownSeBaatBani == true){
			return true;
		} // yaha return false nhi krna pehle backtracking hogi
	}
	// 4. Right and Down dono se nhi hui toh current cell solution ka part nhi ho skta
	//    we need to do backtracking
	sol[i][j] = 0;// backtracking
	return false;
}

int main(){

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00",
	};

	int sol[10][10] = {};

	ratInMaze(maze, sol, 0,0,4,4);


	return 0;
}
















