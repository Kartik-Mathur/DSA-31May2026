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

class Pair{
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root){
	Pair p;
	if(root == NULL){
		p.height = 0;
		p.balanced = true;
		return p;
	}

	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	if(abs(left.height - right.height) <= 1 and left.balanced == true and right.balanced == true){
		p.balanced = true;
	}
	else{
		p.balanced = false;
	}

	return p;
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
	
	Pair ans = isBalanced(root);
	cout << ans.height << endl;
	if(ans.balanced == true){
		cout << "balanced\n";
	}	
	else{
		cout << "not balanced\n";
	}

	return 0;
}
















