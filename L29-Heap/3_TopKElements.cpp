#include <iostream>
using namespace std;

class cmp{
public:
	bool operator()(int a,int b){
		return a > b;
	}
};

void printHeap(priority_queue<int, vector<int>, cmp> h){
	while(!h.empty()){
		cout << h.top() << " ";

		h.pop();
	}
	cout << endl; 
}

int main(){	
	int k = 3;
	int cs = 0;
	priority_queue<int, vector<int>, cmp> h; 


	while(true){
		int data;
		cin>>data;


		if(data == -1){
			// Print topK elements
			printHeap(h);
		}
		else{

			if(cs < k){
				h.push(data);
				cs++;
			}
			else{
				if(data > h.top()){
					h.pop();
					h.push(data);
				}
			}

		}
	}

	return 0;
}
















