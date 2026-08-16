#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

vector<string> v;
string og;

void permutation(string s,string &op){
	// base case
	if(s.size() == 0){
		if(op > og) {
			cout << op << endl;
		}
		return;
	}

	// recursive case
	for (int i = 0; i < s.size(); ++i)
	{
		op.push_back(s[i]);
		permutation(s.substr(0,i) + s.substr(i+1), op);
		op.pop_back();
	}
}

int main(){

	string s;
	cin>>s;

	og = s; // keep a copy of your original string
	
	sort(s.begin(), s.end());
	
	string op = "";
	permutation(s, op);
	
	

	return 0;
}
















