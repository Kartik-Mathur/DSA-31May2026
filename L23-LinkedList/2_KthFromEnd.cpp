#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next; // self - referential class (that has it's own pointer)

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtEnd(node* &head,node* &tail,int data){
	node* n = new node(data);
	if(head == NULL){
		head = tail = n;
	}
	else{
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head){
	while(head != NULL){
		cout << head -> data <<" --> ";
		head = head->next;
	}
	cout << "NULL\n";
}

node* kthFromEnd(node* head,int k){
	node* f = head, * s = head;

	for (int i = 0; i < k; ++i)
	{
		f = f->next; // f ko k steps aage bhej diya
	}

	// ab dono f and s ko 1-1 step aage badhaao
	while(f!=NULL){
		f = f->next;
		s = s->next;
	}

	return s;
}


bool isCyclic(node* head){
	node* s = head, * f = head;
	
	while(f != NULL and f->next !=NULL){
		f = f->next ->next;
		s = s->next;

		if(f == s){
			return true;
		}
	}

	return false;
}

int main(){

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 8);

	printLL(head);

	node* ans = kthFromEnd(head, 5);
	cout << ans -> data << endl;




	return 0;
}
















