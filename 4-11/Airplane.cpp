#include "Airplane.h"

Airplane::Airplane() {

	tailNum = 0;
	capacity = 0;
	numberOfPlanes++;
	tailNum = 456;
	manufacturer = "Bobby";


}

void Airplane::memberFunction() {

}

void zyx(string s) {

	cout << s << endl;

}

void Flight::setFlightNumber(int i) {
	flightNumber = i;
}


void flightFunction(Flight x) {

	cout << x.flightNumber << endl;

}

ostream& operator << (ostream & os, Airplane x) {
	os << "tailNumber is " << x.tailNum << endl;
	os << "manufacturer is " << x.manufacturer << endl;
	return os;
}

Flight& Airplane::operator[] (int i) {

	if (i < 0 || i > 19) {
		cout << "Error out bounds" << endl;

	} else {

		return flights[i];

	}
}

//define static variables outside of any function
int Airplane::numberOfPlanes = 5;
int Airplane::totalCapacity;
int Airplane::numberOfBoeings;
