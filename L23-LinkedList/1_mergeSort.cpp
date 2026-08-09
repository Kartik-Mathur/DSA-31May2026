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

node* mergeSort(node* head){
	// base case
	if(head == NULL or head->next == NULL){
		// single node or none means already sorted hai
		return head;
	}

	// recursive case
	// 1. Divide
	node* mid = midLL(head);
	node* a = head, *b = mid->next;
	mid->next = NULL; 

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* nH = mergeSortedLL(a, b);
	return nH;
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
	head = mergeSort(head);
	printLL(head);





	return 0;
}
















