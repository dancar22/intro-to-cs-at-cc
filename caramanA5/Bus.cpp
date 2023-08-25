#include "Bus.h"
#include <iostream>

Bus::Bus() {

	maintHistory = new MaintHist[25];
	numMH = 0;
	capacity = 0;
	mileage = 0;
	status = 'n';

}

Bus::Bus(Bus & right) {

	maintHistory = new MaintHist[25];
	numMH = 0;
	manufacturer = right.getManufacturer();
	capacity = right.getCapacity();
	mileage = right.mileage;
	status = 'n';

}

string Bus::getId() {

	return id;

}

string Bus::getManufacturer() {

	return manufacturer;

}

int Bus::getCapacity() {

		return capacity;

	}

int Bus::getMileage() {

		return mileage;

}

char Bus::getStatus() {

	return status;

}

void Bus::setStatus(char c) {

	status = c;

}

void Bus::setId(string s) {

	id = s;

}
void Bus::setManufacturer(string s) {

	manufacturer = s;

}
void Bus::setCapacity(int i) {

	capacity = i;

}
void Bus::setMileage(int i) {

	mileage = i;

}


const Bus Bus::operator=(Bus& right) {

	if (this != &right) {

		this -> manufacturer = right.getManufacturer();
		this -> capacity = right.getCapacity();
		this -> mileage = right.mileage;
		status = 'n';

	}

	return *this;
}

bool Bus::operator==(Bus & right) {

	return numMH == right.numMH;

}

bool Bus::operator>(Bus & right) {

	return numMH > right.numMH;

}


Bus::~Bus() {

	delete[] maintHistory;

}

int Bus::numberOfBuses;
