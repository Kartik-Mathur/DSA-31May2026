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

void breakCycle(node* head,node* f){
	node* s = head;
	node* fp;
	while(f!=s){
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool isCyclic(node* head){
	node* s = head, * f = head;
	
	while(f != NULL and f->next !=NULL){
		f = f->next ->next;
		s = s->next;

		if(f == s){
			breakCycle(head, f);
			return true;
		}
	}

	return false;
}

int main(){

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);

	tail->next = head->next->next;

	if(isCyclic(head) == true){
		cout << "Cycle\n";
	}
	else{
		cout <<"Not cyclic\n";
	}


	printLL(head);


	return 0;
}
















