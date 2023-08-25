#include "car.h"

Car::Car(int num, string brand1, string type1) {

	numSeats = num;
	brand = brand1;
	type = type1;

}

int Car::getNumSeats() {

	return numSeats;

}

string Car::getBrand() {

	return brand;

}

string Car::getType() {

	return type;

}

void Car::setNumSeats(int n) {

	numSeats = n;

}

void Car::setBrand(string s) {

	brand = s;

}
void Car::setType(string s) {

	type = s;

}


