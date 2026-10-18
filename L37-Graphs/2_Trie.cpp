#include <iostream>
#include <map>
using namespace std;

class node{
public:
	char ch;
	bool isEnd;
	map<char, node*> h;

	node(char c){
		ch = c;
		isEnd = false;
	}
};

class Trie{
public:
	node* root;

	Trie(){
		root = new node('\0');
	}

	void addWord(string word){
		node* temp = root;
		for(char ch : word){
			if(temp->h.count(ch) == 0){
				node*n = new node(ch);
				temp->h[ch] = n;
			}
			temp = temp->h[ch];
		}

		temp->isEnd = true;
	}

	bool isWordPresent(string word){
		node* temp = root;
		for(char ch : word){
			if(temp->h.count(ch) == 0){
				return false;
			}
			temp = temp->h[ch];
		}

		return temp->isEnd;
	}

	void autoCompleteHelper(node* temp, string word){
		if(temp->isEnd == true){
			cout << word << endl; // Ek word meine print kar diya
		}

		for(auto p: temp->h){
			autoCompleteHelper(p.second, word + p.first);
		}
	}

	void autoComplete(string word){
		node* temp = root;
		for(char ch : word){
			if(temp->h.count(ch) == 0){
				return;
			}
			temp = temp->h[ch];
		}

		autoCompleteHelper(temp, word);
	}
};

int main(){

	Trie t;
	t.addWord("Hello");
	t.addWord("Hey");
	t.addWord("Her");
	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Coding");

	t.autoComplete("He");
	// while(true){
	// 	string word;
	// 	cin>>word;
	// 	if(t.isWordPresent(word)) cout << "Yes\n";
	// 	else cout << "No\n";
	// }



	return 0;
}
















