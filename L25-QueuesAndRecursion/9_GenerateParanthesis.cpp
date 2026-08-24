#include <iostream>
using namespace std;

void print(int n,string &s,int open = 0, int close = 0){
	if(s.size() == 2*n){
		cout << s << endl;
		return;
	}

	

	if(close < open){
		s.push_back(')');
		print(n,s,open,close+1);
		s.pop_back();
	}

	if(open < n){
		s.push_back('(');
		print(n,s,open+1,close);
		s.pop_back();
	}
}

int main(){

	int n;
	cin>>n;

	string s="";
	print(n,s);

	return 0;
}
















