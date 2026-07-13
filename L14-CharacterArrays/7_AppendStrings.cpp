#include <iostream>
#include <cstring>
using namespace std;

void append(char *a,char *b){
	int lena = strlen(a);
	int lenb = strlen(b);

	int i = lena, j = 0;

	while(j<=lenb){
		a[i] = b[j];
	
		i++;
		j++;
	}
}

int main(){

	char a[100];
	char b[100];
	cin.getline(a,100);
	cin.getline(b,100);

	append(a,b);
	// strcat(a,b); // Inbuilt
	cout << a <<endl;

	return 0;
}
















