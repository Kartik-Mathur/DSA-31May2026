#include <iostream>
using namespace std;

int main(){
	int x = 0,y = 0;
	char ch;

	ch = cin.get();
	while(ch != '\n'){
		if(ch == 'E') x++;
		else if(ch == 'W') x--;
		else if(ch == 'S') y--;
		else if(ch == 'N') y++;

		ch = cin.get();
	}
	
	// Print karna h
	if(x>=0){
		// Print 'E' x times
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}

	// Print N or S
	if(y>=0){
		// Print N, y times
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	else{
		// Print S, |y| times
		y = -y;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}

	// Print 'W' 
	if(x<=0){
		// Print 'W', |x| times
		x = -x;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}

	return 0;
}
















