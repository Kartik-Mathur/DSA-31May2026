#include <iostream>
#include <functional> // greater<int>
#include <queue> // heap is present inside this header file only
using namespace std;

class cmp{
public:
	bool operator()(int a,int b){
		return a > b;
	}
};

int main(){

	// priority_queue<int> h; // MaxHeap
	// priority_queue<int, vector<int>, cmp > h; // Min/Max
	priority_queue<int, vector<int>, greater<int> > h; // MinHeap
	// priority_queue<int, vector<int>, less<int> > h; // MaxHeap

	h.push(11);
	h.push(1);
	h.push(3);
	h.push(2);
	h.push(5);
	h.push(4);
	h.push(0);

	while(!h.empty()){
		cout << h.top() << " ";

		h.pop();
	}
	cout << endl;

	return 0;
}
















