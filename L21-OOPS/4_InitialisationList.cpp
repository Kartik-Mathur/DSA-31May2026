#include <iostream>
using namespace std;

// BLUEPRINT
class Car{
private: 
	int price; 
public:
	char * name;
	int model;
	const int tyres; // isse har jagah initialise karna mandatory hai
	static int cnt; // static members belong to class

	Car(): tyres(4), name (NULL) {
		// name = NULL;  // assignment
		cnt++;
	}

	Car(char* n, int p, int m): tyres(4){
		name = new char[strlen(n) + 1]; 
		strcpy(name, n);
		price = p;
		model = m;
		// tyres = 4; // cannot be done
		cnt++;
	}

	Car(const Car &X): tyres(4){
		cout << "Inside Copy Constructor\n";
		name = new char[strlen(X.name) + 1]; 
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		cnt++;
	}

	void operator=(const Car &X){
		cout << "Inside Copy Assignment\n";
		if(name != NULL){
			delete []name;
		}

		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// Destructor : Object ko destroy krega
	~Car(){
		cout << "Destroying "<<name<<endl;
	}


	// Functions
	void print(){
		cout << "Name  : "<< name << endl;
		cout << "Model : "<< model << endl;
		cout << "Price : "<< price << endl;
	}

	// Price ka getter and setter
	void setPrice(int p){
		if(p >= 100 and p < 200){
			price = p;
		}
		else{
			price = 120;
		}
	}

	int getPrice(){
		return price;
	}

	// Updating name
	void setName(char *n){
		if(name != NULL){
			delete []name;
		}

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	// Operator overloading......
	void operator+=(Car &X){
		char *p = name;
		name = new char[strlen(p) + strlen(X.name) + 1];
		strcpy(name, p);
		strcat(name, X.name);
		delete []p;

		price += X.price;
		model = 2026;
	}
};

// Car:: ke scope wale cnt ko zero kardo
int Car::cnt = 0; // This is how we provide value to static members

int main(){

	Car A; 

	A.setName("Maruti");
	A.setPrice(100);
	A.model = 2022;

	cout << A.name << endl;
	cout << A.model << endl;
	cout << A.getPrice() << endl;

	Car B;
	B.setName("BMW");
	B.setPrice(180);
	B.model = 2012;

	cout << B.name << endl;
	cout << B.model << endl;
	cout << B.getPrice() << endl;

	Car C = A;
	C.print();

	cout << Car::cnt << endl;
	cout << A.cnt << endl;

	A+=B;
	A.print();

	

	return 0;
}
















