#include <iostream>
#include <vector>
using namespace std;

class minHeap{
private:
	vector<int> v;
	
	void heapify(int i){
		int left = 2*i;
		int right = left + 1;

		int mi = i;
		if(left < v.size() and v[left] < v[mi]){
			mi = left;
		}

		if(right < v.size() and v[right] < v[mi]){
			mi = right;
		}

		if(mi != i){
			swap(v[mi], v[i]);
			heapify(mi); // recursion ko bol diya
		}
	}

public:

	minHeap(){
		v.push_back(-1); // 0th index ko block kardo
		// Agar vector mei 1 element hai that means it is empty...
	}

	void push(int d){
		v.push_back(d);
		int c = v.size() - 1;
		int p = c/2;

		while(p>0 and v[p]>v[c]){
			swap(v[p], v[c]);
			p /= 2;
			c /= 2;
		}
	}

	int top(){
		return v[1]; // 0th index blocked hai 1st index par minimum milega
	}

	void pop(){
		swap(v[1], v[v.size() - 1]);
		v.pop_back();

		heapify(1); // recursive function to correct heap order property
	}

	bool empty(){
		if(v.size() == 1){
			return true;
		}

		return false;
	}

};

int main(){


	minHeap h;

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
	cout << endl; // heap sort -> O(n.logn);


	return 0;
}
















