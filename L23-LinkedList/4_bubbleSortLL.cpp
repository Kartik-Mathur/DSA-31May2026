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

int lengthLL(node* head){
	int cnt = 0;

	while(head != NULL){
		cnt++;
		head = head->next;
	}

	return cnt;
}

void bubbleSort(node* &head){
	node* p, *c, *n;
	int len = lengthLL(head);
	for (int i = 0; i < len - 1; ++i)
	{
		c = head;
		p = NULL;

		while(c != NULL and c -> next != NULL){
			n = c -> next;
			if(c -> data > n -> data){
				// swapping hogi
				if(p == NULL){
					// head change hoga
					c -> next = n->next;
					n -> next = c;
					p = head = n;
				}
				else{
					// head change nhi hoga
					c -> next = n->next;
					n -> next = c;
					p -> next = n;
					p = n;
				}
			}
			else{
				// swapping nhi hogi
				p = c;
				c = n;
			}
		}

	}
}

int main(){

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, -3);
	insertAtEnd(head, tail, -4);
	insertAtEnd(head, tail, 0);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 1);

	printLL(head);
	bubbleSort(head);
	printLL(head);


	return 0;
}
















