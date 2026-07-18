#include <iostream>
using namespace std;

bool isPermutation(char *a,char *b){
	int freq[26] = {0}; // because we'll assume only
	// small alphabets will occur in a[] and b[]

	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		int index = ch - 'a';
		freq[index] ++;
	}


	for (int i = 0; b[i] != '\0'; ++i)
	{
		char ch = b[i];
		int index = ch - 'a';
		freq[index] --;
	}

	for (int i = 0; i < 26; ++i)
	{
		if(freq[i] != 0){
			return false;
		}
	}

	return true;

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif	

	char a[] = "abcba";
	char b[] = "bazcb";

	if(isPermutation(a,b) == true){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}


	return 0;
}
















