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

node* buildTree(){
	int data;
	cin>>data;
	if(data == -1) return NULL;

	node * root = new node(data);
	root -> left = buildTree();
	root -> right = buildTree();

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

node* searchKey(node* root,int key){
	if(root == NULL){
		return root;
	}

	if(root -> data == key){
		return root;
	}

	node* x = searchKey(root->left, key);
	if(x != NULL){
		return x;
	}

	x = searchKey(root->right, key);
	return x;
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){

	node* root = buildTree();

	preorder(root);
	cout << endl; 
	inorder(root);
	cout << endl; 
	postorder(root);
	cout << endl; 
	
	int key;
	cin>>key;

	node* ans = searchKey(root, key);
	if(ans != NULL){
		cout << ans -> data << endl;
	}
	else{
		cout << "Key not found\n";
	}

	return 0;
}
















