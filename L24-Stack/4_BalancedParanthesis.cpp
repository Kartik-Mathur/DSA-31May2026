#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string &str){

	stack<char> s;

	for (int i = 0; i < str.size(); ++i)
	{
		char ch = str[i];
		switch(ch){
		case '[':
		case '(':
		case '{':
			s.push(ch);
			break;
		case ')':
			if(!s.empty() and s.top() == '('){
				s.pop();
			}
			else{
				return false;
			}
			break;
		case ']':
			if(!s.empty() and s.top() == '['){
				s.pop();
			}
			else{
				return false;
			}
			break;
		case '}':
			if(!s.empty() and s.top() == '{'){
				s.pop();
			}
			else{
				return false;
			}
			break;
		}
	}


	if(s.empty()){
		return true;
	}

	return false;
}

int main(){

	string s = "(a+b*[c+d*{e-f+t}])";

	if(isBalanced(s)){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	return 0;
}
















