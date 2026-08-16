#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

vector<string> v;
string og;

void permutation(string &s,int i){
	// base case
	if(i == s.size()){
		// cout << s << endl;
		v.push_back(s);
		return;
	}

	// recursive case
	for (int j = i; j < s.size(); ++j)
	{
		swap(s[i], s[j]);
		permutation(s, i+1);
		swap(s[i], s[j]); // backtracking
	}
}

int main(){

	string s;
	cin>>s;

	og = s; // keep a copy of your original string

	permutation(s, 0);
	sort(v.begin(), v.end());
	
	for(int i = 0 ; i < v.size() ; i++){
		if(v[i] > og){
			cout << v[i] << endl;
		}
	}

	return 0;
}
















