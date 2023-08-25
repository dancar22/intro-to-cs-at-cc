#include "Bus.h"

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

int Bus::numberOfBuses;
