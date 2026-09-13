#include <iostream>
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

node* insertInBST(node* root, int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}

	if(root->data >= data){
		root->left = insertInBST(root->left, data);
	}
	else{
		root->right = insertInBST(root->right, data);
	}

	return root;
}

node* buildTree(){
	
	node* root = NULL;

	int data;
	cin >> data;

	while(data != -1){

		root = insertInBST(root, data);

		cin >> data;
	}	

	return root;
}

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


// 8 3 10 1 6 14 4 7 13 -1
int main(){

	node* root = buildTree();

	preorder(root);
	cout << endl; 
	inorder(root);
	cout << endl; 
	postorder(root);
	cout << endl; 
	
	

	return 0;
}
















