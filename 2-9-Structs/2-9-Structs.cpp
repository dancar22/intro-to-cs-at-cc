#include <iostream>

using namespace std;


struct Airplane {

	//the following are the members of the struct
	string manufacturer;
	string model;
	int tailNumber;
	string airLine;
	int numPass;
	string seat[300];

};

void theFunc(Airplane &);
void theFunc3(Airplane *);
void theFunc4(Airplane * []);

int main() {


// case 1 - static Airplanes
	Airplane p1;
	Airplane p2;

	p1.manufacturer = "Boeing";
	p2.manufacturer = "Airbus";
	p1.numPass = 90;
	p1.model = "737";

	p1.numPass++;

// case 2 - static array of Airplanes

	int SIZE = 100;
	Airplane aa[SIZE]; // array of airplanes
	cout << aa[37].numPass << endl;
	cout << (*(aa+37)).numPass << endl;

	aa[37].seat[192] = "34F";

	for (int i = 0; i < 100; i++) {

		aa[i].tailNumber = 0;

		for(int j = 0; j < 300; j++) {

			aa[i].seat[j] = "AA";
		}

	}

// case 3 - dynamic Airplane

	Airplane * ap;
	ap = new Airplane;
	(*ap).manufacturer = "Sam's";
	ap -> manufacturer = "Ann's";

	cout << (*ap).manufacturer << endl;

// case 4 - dynamic Airplane array

	Airplane * aoa;
	aoa = new Airplane[100];

	aoa[37].manufacturer = "Boeing";

	aoa[32].numPass = 400;

// case 5 - individual airplanes managed by a pointer array

	Airplane * aopa[100];

	int totalCap = 0;
	for (int i = 0; i < 100; i++) {

		aopa[i] = new Airplane;
		totalCap += aopa[i] -> numPass;

	}

	cout << "Total capacity: " << totalCap << endl;

	cout << "-->" << (*(aopa[53])).numPass << "<--" << endl;


	Airplane myPlane = {"Boeing", "Big One", 69, "Lufghasnsa", 5};


	theFunc(myPlane);
	theFunc3(ap);
	theFunc4(aopa);

	return 0;
}

void theFunc(Airplane & myPlane) {

	myPlane.model = "737";

}

void theFunc3(Airplane * ap) {

	ap -> model = "MD80";


}

void theFunc4(Airplane * qqq[]) {

	qqq[5] -> numPass = 250;

}
