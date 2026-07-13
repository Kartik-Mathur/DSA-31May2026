#include <iostream>
using namespace std;

void copy(char *largest, char	 *a){
	// a[] ko largest[] ke andar as it is copy kardo
	int i = 0, j = 0;
	int lena = strlen(a);

	while(j<=lena){
		largest[i] = a[j];
		i++;
		j++;
	}
}

int main(){
	char a[1000], largest[1000];	
	int lar_len = 0;

	int n;
	cin>>n;

	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a,1000);
		int lena = strlen(a);
		if(lena > lar_len){
			lar_len = lena;

			// copy(largest, a); // largest ke andar array a ko copy kardo
			strcpy(largest, a); // inbuilt function to copy one array into another
		}
	}

	cout << "Largest     : "<<largest <<endl;
	cout << "Largest Len : "<<lar_len <<endl;

	return 0;
}
















