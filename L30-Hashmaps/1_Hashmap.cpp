#include <iostream>
using namespace std;
class node{
public:
	string key;
	int value;
	node* next;
	node(string k, int v){
		key = k;
		value = v;
		next = NULL;
	}
};

class hashmap{
	node** h;
	int ts;
	int cs; // to check (cs/ts) >= 0.5 for rehashing

	int hashFunction(const string &k){
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < k.size(); ++i)
		{
			ans += (k[i]% ts)*(mul% ts);
			ans %= ts;

			mul*=19;
			mul%=ts;
		}

		return ans % ts;
	}

	void rehashing(){
		node** oldh = h;
		int oldts = ts;

		h = new node*[2*ts];
		ts = 2*ts;
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			h[i] = NULL; // we cannot let pointers to store garbage.
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head = oldh[i];
			while(head != NULL){
				insert(head->key, head->value);

				node* t= head;
				head = head->next;
				delete t;
			}
		}

		delete[] oldh;
	}

public:

	hashmap(int s = 5){
		h = new node*[s];
		for (int i = 0; i < s; ++i)
		{
			h[i] = NULL; // we never leave garbage in a pointer bucket
		}

		ts = s; // if user provides s then we take that else we take default size 5
		cs = 0; // initially array doesnt have any node inside of it.
	}

	void insert(string key, int value){
		int indx = hashFunction(key);

		node* t = new node(key, value);
		t->next = h[indx];
		h[indx] = t;
		cs++;

		float load_factor = cs / (ts*1.0);
		if(load_factor >= 0.6){
			rehashing();
		}
	}

	void print(){
		for (int i = 0; i < ts; ++i)
		{
			cout << i << " : ";

			node* head = h[i];
			while(head != NULL){
				cout << "(" << head->key<<", "<<head->value<<") ";
				head = head->next;
			}

			cout << endl;
		}
	}
};

int main(){

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Apple", 150);
	h.insert("Pineapple", 200);
	h.insert("Kiwi", 140);
	h.insert("Guava", 50);
	h.insert("Orange", 80);

	h.print();


	return 0;
}
















