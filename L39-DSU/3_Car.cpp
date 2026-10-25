#include <iostream>
using namespace std;

class Car{
public:
	string name;
	int model;
	string color;
};

istream& operator>>(istream &cin, Car &X){
	cout << "Enter Name: ";
	cin>>X.name;
	cout << "Enter Model: ";
	cin>>X.model;
	cout << "Enter color: ";
	cin>>X.color;
	return cin;
}

ostream& operator<<(ostream& cout, Car &X){
	cout << "Name  : "<<X.name<<endl;
	cout << "model : "<<X.model<<endl;
	cout << "color : "<<X.color;
	return cout;
}


int main(){

	Car A;
	cin>>A;

	cout << A << endl;

	return 0;
}
















