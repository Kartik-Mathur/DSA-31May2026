#include <iostream>
using namespace std;

int countHi(string &s,int i){
	// base case
	if(i == s.size()){
		return 0;
	}

	// recursive case
	if(s[i] == 'h' and i+1 < s.size() and s[i+1] == 'i'){
		return 1 + countHi(s, i+2);
	}
	else{
		return countHi(s, i+1);
	}
}

void removeHi(string s,int i,string ans = ""){
	// base case
	if(i == s.size()){
		cout << ans << endl;
		return;
	}

	// recursive case
	if(s[i] == 'h' and i+1 < s.size() and s[i+1] == 'i'){
		removeHi(s, i+2, ans);
	}
	else{
		removeHi(s, i+1, ans + s[i]);
	}

}

void addBye(string s,int i,string ans = ""){
	// base case
	if(i == s.size()){
		cout << ans << endl;
		return;
	}

	// recursive case
	if(s[i] == 'h' and i+1 < s.size() and s[i+1] == 'i'){
		addBye(s, i+2, ans + "bye");
	}
	else{
		addBye(s, i+1, ans + s[i]);
	}

}


int main(){

	string s;
	cin>>s;
	cout << countHi(s, 0) << endl;

	removeHi(s, 0);
	addBye(s, 0);

	return 0;
}
















