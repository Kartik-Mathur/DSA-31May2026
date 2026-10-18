#include <iostream>
using namespace std;

class node{
public:
	node* left, *right;
	int no;
	node(){
		left = right = NULL;
	}
};

class Trie{
public:
	node* root;
	Trie(){
		root = new node();
	}

	void addNumber(int no){
		node * temp = root;
		for(int i = 30 ; i >= 0 ; i--){
			int bit =  (no&(1<<i) ? 1 : 0);

			if(bit == 1){
				if(!temp->right) {
					temp->right = new node(); // insert kardo
				}

				temp=temp->right;
			}
			else{
				if(!temp->left) {
					temp->left = new node(); // insert kardo
				}

				temp=temp->left;
			}
		}

		temp -> no = no;
	}

	int pairNumber(int no){
		node * temp = root;
		for(int i = 30 ; i >= 0 ; i--){
			int bit =  (no&(1<<i) ? 1 : 0);

			if(bit == 1){
				if(temp->left) temp = temp->left;
				else temp = temp->right;
			}
			else{
				if(temp->right) temp = temp->right;
				else temp = temp->left;
			}
		}

		return temp -> no;
	}
};

int main(){
	int a[] = {3,1,2,4};
	int n = sizeof(a)/sizeof(int);
	Trie t;
	int ans = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		t.addNumber(a[i]);
		int x = t.pairNumber(a[i]);
		cout << a[i] << " ^ " << x <<" : "<<(a[i]^x)<<endl;

		ans = max(ans, a[i]^x);
	}
	cout << "Max Xor "<<ans<<endl;

	return 0;
}
















