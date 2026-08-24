#include <iostream>
using namespace std;

void print(int n, string &ans){
	if(ans.size() > 0 and n < stoi(ans)){
		return;
	}

	if(ans.size() > 0){
		cout << stoi(ans) << " ";
	}
	
	int start = (ans.size() == 0) ? 1 : 0;

	for (int digit = start; digit <= 9; ++digit)
	{
		char ch = '0' + digit; // convert it to the character bucket
		ans.push_back(ch);
		print(n, ans);
		ans.pop_back();
	}
}

int main(){

	int n;
	cin>>n;
	string ans = "";
	cout << 0 << " ";
	print(n, ans);


	return 0;
}
















