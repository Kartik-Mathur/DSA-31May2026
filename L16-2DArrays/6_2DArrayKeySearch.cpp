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

int main(){

	int a[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int rows = 3, cols = 4;
	print2D(a, rows, cols);

	int key;
	cin>>key;

	// Logic
	bool keyFound = false;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if(a[i][j] == key){
				cout << "Key found : "<<i<<", "<<j<<endl;
				keyFound = true;
				break;
			}
		}

		if(keyFound == true){
			break;
		}
	}

	if(keyFound == false){
		cout << "Key not found\n";
	}

	return 0;
}
















