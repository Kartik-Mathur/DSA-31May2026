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

void insertAtFront(node* &h, node* &t, int data){

	node* n = new node(data);

	if(h == NULL){
		h = t = n;
	}
	else{
		n -> next = h;
		h = n;
	}

}

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

void insertAtMid(node* &head,node *&tail,int pos,int data){
	if(pos == 0){
		insertAtFront(head,tail,data);
	}
	else{
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp -> next;
		}

		node* n = new node(data);
		n -> next = temp -> next;
		temp -> next = n;
	}
}

void deleteAtFront(node* &head,node *&tail){
	if(head == NULL){
		return;
	}
	else if(head ->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		head = head	-> next;
		delete temp;
	}
}

void deleteAtEnd(node* &head,node *&tail){
	if(head == NULL){
		return;
	}
	else if(head ->next == NULL){
		delete head;
		head = tail = NULL;
	}
	else{
		node* temp = head;
		while(temp->next != tail){
			temp = temp->next;
		}

		delete tail;
		tail = temp;
		tail -> next = NULL;
	}
}

void deleteAtMid(node* &head,node* &tail,int pos){
	if(pos == 0){
		deleteAtFront(head, tail);
	}
	else{
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = temp -> next;
		temp -> next = n -> next;
		delete n;
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

void reverseLL(node* &head,node* &tail){
	node* c = head;
	node* p = NULL;

	while(c != NULL){
		node* n = c -> next;
		c->next = p;
		p = c;
		c = n;
	}

	swap(head, tail);
}

void reverseLLRec(node* &head,node* &tail, node* c, node* p = NULL){
	if(c == NULL){
		swap(head, tail);
		return;
	}

	// ek node ko peeche humne point karwa diya
	node* n = c->next;
	c->next = p;// ek node ko uske peeche hum point karwa denge

	// remaining nodes ko recursion ko bol diya ki peeche point karwa do....
	reverseLLRec(head, tail, n, c);
}

int main(){

	node* head = NULL, *tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);



	printLL(head);
	insertAtMid(head, tail, 4, 11);
	printLL(head);
	deleteAtEnd(head, tail);
	printLL(head);
	deleteAtMid(head, tail, 4);
	printLL(head);
	cout << "Length : "<<lengthLL(head) << endl;

	printLL(head);
	reverseLLRec(head, tail, head);
	printLL(head);

	return 0;
}
















