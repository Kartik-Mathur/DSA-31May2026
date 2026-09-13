#include <iostream>
#include <cmath> // for abs()
using namespace std;

class node{
public:
	int data;
	node* left, *right;
	node(int d){
		data = d;
		left = right = NULL;
	}
};



void preorder(node* root){
	if(root == NULL){
		return;
	}

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){
	if(root == NULL){
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root){
	if(root == NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}


node* buildTree(int *a,int s,int e){
	if(s > e){
		return NULL;
	}
	

	int mid = s + (e - s)/2;
	node* root = new node(a[mid]);

	root->left = buildTree(a, s, mid-1);
	root->right = buildTree(a, mid+1, e);
	return root;
}

int main(){
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	node* root = buildTree(a, 0, n-1);

	preorder(root);
	cout << endl; 
	inorder(root);
	cout << endl; 
	postorder(root);
	cout << endl; 

	
	

	return 0;
}
















