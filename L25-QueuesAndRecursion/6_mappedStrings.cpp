#include <iostream>
using namespace std;

void print(string s,int i,string ans){
	// base case
	if(i == s.size()){
		cout << ans << endl;
		return;
	}
	// recursive case
	int singleDigit = (s[i] - '0');
	char ch = ('A' + singleDigit - 1);
	print(s,i+1, ans + ch);
	
	if(i + 1 < s.size()){
		int doubleDigit = (s[i] - '0') * 10 + (s[i+1] - '0');
		if(doubleDigit <= 26){
			char ch = ('A' + doubleDigit - 1);
			print(s, i+2, ans + ch);
		}
	}
}

int main(){

	string s;
	cin>>s;

	print(s, 0, "");

	return 0;
}
















