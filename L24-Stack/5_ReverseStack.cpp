#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s,int top){
	if(s.empty()){
		s.push(top);
		return;
	}

	int x = s.top();
	s.pop();
	push_bottom(s, top);
	s.push(x);
}

void reverseStack(stack<int> &s){
	// base case
	if(s.empty()){
		return; // khali hai stack toh kch nhi krenge
	}

	// recursive case
	int top = s.top();
	s.pop();

	reverseStack(s);
	push_bottom(s, top); // stack ke last mei top ko insert karna h
}


int main(){

	stack <int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	reverseStack(s);

	while(!s.empty()){
		cout << s.top() << ' ';

		s.pop();
	}


	return 0;
}
















