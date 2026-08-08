#include <iostream>
using namespace std;

// BLUEPRINT
class Car{
private: 
	int price; // To update this and read it we have
	// getter and setter
public:
	char * name;
	int model;

	// Default constructor
	Car(){
		name = NULL; // We never leave garbage in pointers
		cout << "Inside Default Constructor\n";
	}

	// parameterized constructor
	Car(char* n, int p, int m){
		cout << "Inside Parameterized Constructor\n";
		// delete []name yaha nhi kroge
		// Kyunki constructor first time jab object banta hai tab call hota h
		// isse pehle name mei kch aur ho nhi skta..
		name = new char[strlen(n) + 1]; 
		strcpy(name, n);
		price = p;
		model = m;
	}

	// Copy Constructor
	Car(Car &X){
		cout << "Inside Copy Constructor\n";
		name = new char[strlen(X.name) + 1]; 
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// Copy assigment operator
	void operator=(Car &X){
		cout << "Inside Copy Assignment\n";
		if(name != NULL){
			delete []name;
		}

		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
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
};

int main(){

	Car A; // Create

	// strcpy(A.name, "Maruti"); // this will not work
	A.setName("Maruti");
	// A.price = 100;
	A.setPrice(100);
	A.model = 2022;

	cout << A.name << endl;
	cout << A.model << endl;
	// cout << A.price << endl;
	cout << A.getPrice() << endl;

	Car B;
	// strcpy(B.name, "BMW");
	B.setName("BMW");
	// B.price = -120;
	B.setPrice(180);
	B.model = 2012;

	cout << B.name << endl;
	cout << B.model << endl;
	// cout << B.price << endl;
	cout << B.getPrice() << endl;

	Car C("Audi", 200, 2025); // this will call parameterized constructor
	cout << C.name << endl;
	cout << C.model << endl;
	// cout << C.price << endl;
	cout << C.getPrice() << endl;

	Car D = A; // This will call copy constructor
	D.print();
	// cout << D.name << endl;
	// cout << D.model << endl;
	// cout << D.price << endl;

	Car E; // default constructor call hoga
	E = A; // Copy assignment operator call karega...
	E.print();
	// cout << E.name << endl;
	// cout << E.model << endl;
	// cout << E.price << endl;

	return 0;
}
















