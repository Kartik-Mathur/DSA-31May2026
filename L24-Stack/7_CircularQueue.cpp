#include <iostream>
using namespace std;

class Queue{
	int *a;
	int n;
	int cs, f, r;
public:
	Queue(int s = 5){
		a = new int[s];
		n = s;
		f = cs = 0;
		r = n-1;
	}

	void push(int d){
		if(cs >= n){
			cout << "Overflow\n";
			return;
		}

		r = (r+1)%n;
		a[r] = d;
		cs++;
	}

	void pop(){
		if(cs > 0){
			f = (f+1)%n;
			cs--;
		}
		else{
			cout << "Underflow\n";
		}
	}

	int front(){
		return a[f];
	}

	bool empty(){
		return cs == 0;
	}

	int size(){
		return cs;
	}
};

int main(){
	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	cout << q.size() << endl;

	while(!q.empty()){
		cout << q.front() << " ";

		q.pop();
	}

	return 0;
}
















