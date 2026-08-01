#include <iostream>
using namespace std;

int main(){

	string s[5];

	s[0] = "hi";
	s[1] = "bye";
	s[2] = "hello";

	for (int i = 0; i < 3; ++i)
	{
		cout << s[i] << endl;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < s[i].size(); ++j)
		{
			cout << s[i][j] <<" - ";
		}
		cout << endl;
	}



	return 0;
}
















