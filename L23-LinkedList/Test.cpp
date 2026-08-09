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

// Middle of the linked list
node * midLL(node* head){
	if(head == NULL or head->next == NULL){
		return head;
	}

	node * s = head;
	node * f = head->next; // f ko ek step aage se start kia

	while(f != NULL and f->next != NULL){
		f = f->next->next;
		s = s->next;
	}

	return s;
}

node* mergeSortedLL(node* a,node* b){
	if(a == NULL){
		return b;
	}
	if(b == NULL){
		return a;
	}

	node* nH;
	if(a->data < b->data){
		nH = a;
		nH -> next = mergeSortedLL(a->next, b);
		return nH;
	}
	else{
		nH = b;
		nH -> next = mergeSortedLL(a, b->next);
		return nH;
	}
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

	node* ans = midLL(head);
	if(ans != NULL){
		cout << "Middle : "<< ans->data << endl;
	}

	node* heada, *taila, *headb, *tailb;
	heada = taila = headb = tailb = NULL;

	insertAtEnd(heada, taila, 1);
	insertAtEnd(heada, taila, 3);
	insertAtEnd(heada, taila, 5);
	insertAtEnd(heada, taila, 6);

	insertAtEnd(headb, tailb, 2);
	insertAtEnd(headb, tailb, 4);
	insertAtEnd(headb, tailb, 7);
	insertAtEnd(headb, tailb, 8);

	printLL(heada);
	printLL(headb);
	node* nH = mergeSortedLL(heada, headb);
	printLL(nH);



	return 0;
}
















