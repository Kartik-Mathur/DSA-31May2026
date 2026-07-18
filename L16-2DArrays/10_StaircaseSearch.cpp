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

void search(int a[][4], int rows, int cols,int key){
	int i = 0, j = cols - 1;
	while(i<rows and j >= 0){
		if(a[i][j] == key){
			cout << "Key found "<<i<<", "<<j<<endl;
			return ;
		}
		else if(key < a[i][j]){
			j--;
		}
		else{
			i++;
		}
	}

	cout << "Key not found\n";

}

int main(){

	int a[][4] = {
		{1,4,5,10},
		{2,6,8,12},
		{3,7,15,20},
	};

	int rows = 3, cols = 4;
	print2D(a, rows, cols);
	search(a, rows, cols, 7);


	return 0;
}
















