#include <iostream>
using namespace std;

class Stack{
	queue<int> q1, q2;
public:

	void push(int d){
		if(!q2.empty()){
			q2.push(d);
		}
		else{
			q1.push(d);
		}
	}

	void pop(){
		if(!q1.empty()){
			while(q1.size() > 1){
				int x = q1.front();
				q1.pop();

				q2.push(x);
			}
			q1.pop();
		}
		else{
			while(q2.size() > 1){
				int x = q2.front();
				q2.pop();

				q1.push(x);
			}
			q2.pop();
		}
	}

	bool empty(){
		return q1.empty() and q2.empty();
	}

	int top(){
		if(!q1.empty()){
			while(q1.size() > 1){
				int x = q1.front();
				q1.pop();

				q2.push(x);
			}
			int t = q1.front();
			q1.pop();
			q2.push(t);
			return t;
		}
		else{
			while(q2.size() > 1){
				int x = q2.front();
				q2.pop();

				q1.push(x);
			}
			int t = q2.front();
			q2.pop();
			q1.push(t);
			return t;
		}
	}
};

int main(){

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}
















