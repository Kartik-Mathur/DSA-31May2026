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

int countNodes(node* root){
	if(root == NULL){
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root-> right);
}

int height(node* root){
	if(root == NULL){
		return 0;
	}

	return 1 + max(height(root->left), height(root->right));
}

int diameter(node* root){
	if(root == NULL){
		return 0;
	}

	// Case 1: Dia via root node
	int op1 = height(root->left) + height(root->right);
	// Case 2: Dia in LST
	int op2 = diameter(root->left);
	// Case 3: Dia in RST
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}


class Pair{
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root){
	if(root == NULL){
		Pair p;
		p.height = p.diameter = 0;
		return p; // empty matlab both are 0
	}

	Pair left = fastDiameter(root->left); // LST se height and dia
	Pair right = fastDiameter(root->right); // RST se height and dia

	Pair p;
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1, max(op2,op3));
	p.height = max(left.height, right.height) + 1;

	return p;
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
	cout << "Count    : "<<countNodes(root) << endl;
	cout << "Height   : "<<height(root) << endl;
	cout << "Diameter : "<<diameter(root) << endl;

	Pair p = fastDiameter(root);
	cout << "Fast height   : "<<p.height << endl;
	cout << "Fast diameter : "<<p.diameter << endl;

	return 0;
}
















