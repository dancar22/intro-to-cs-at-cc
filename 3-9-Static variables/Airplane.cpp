#include "Airplane.h"

Airplane::Airplane() {

	tailNum = 0;
	capacity = 0;
	numberOfPlanes++;

}

void Airplane::memberFunction() {

}


void Airplane::xyz(string s) {

	cout << s << endl;

}

void zyx(string s) {

	cout << s << endl;

}

//define static variables outside of any function
int Airplane::numberOfPlanes = 5;
int Airplane::totalCapacity;
int Airplane::numberOfBoeings;
