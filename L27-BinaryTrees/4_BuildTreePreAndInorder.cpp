#include <iostream>
#include <queue>
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

void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* x = q.front();
		q.pop();
		if(x != NULL){
			cout << x -> data << " ";
			if(x->left != NULL) q.push(x->left);
			if(x->right != NULL) q.push(x->right);
		}
		else{
			cout << endl;
			if(!q.empty()) q.push(NULL);
		}
	}
}

node* levelOrderBuildTree(){
	queue<node*> q;
	int data ;
	cin>> data;

	if(data == -1){
		return NULL;
	}

	node* root = new node(data);
	q.push(root);

	while(!q.empty()){
		node* x = q.front();
		q.pop();

		int left, right;
		cout << "Enter children of "<< x->data <<" : ";

		cin>>left>>right;
		if(left != -1){
			x->left = new node(left);
			q.push(x->left);
		}
		if(right != -1){
			x->right = new node(right);
			q.push(x->right);
		}
	}

	return root;
}


node* makeTree(int *pre, int &k, int *in, int s,int e){
	// base case
	if(s>e){
		return NULL;
	}

	node* root = new node(pre[k++]);

	int j;
	for (int i = s; i <= e; ++i)
	{
		if(in[i] == root->data){
			j = i;
			break;
		}
	}

	root->left = makeTree(pre,k, in, s, j-1);
	root->right = makeTree(pre,k, in, j+1, e);

	return root;
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){

	// node* root = buildTree();
	int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
	int n = sizeof(pre)/sizeof(int);
	int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
	int k = 0;
	node* root = makeTree(pre, k, in, 0, n-1);

	preorder(root);
	cout << endl; 
	inorder(root);
	cout << endl; 
	postorder(root);
	cout << endl; 
	
	levelOrderTraversal(root);
	

	return 0;
}
















