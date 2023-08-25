#include "functions.h"


void displayBusSet(Bus busSet[], int size) {

	displayCH();

	for (int i = 0; i < size; i++) {


		cout << setfill(' ') << left << setw(15) << busSet[i].getId();
		cout << setw(21) << busSet[i].getManufacturer();
		cout << setw(17) << busSet[i].getCapacity();
		cout << setw(15) << busSet[i].getMileage();
		cout << setw(15) << busSet[i].getStatus() << endl;


	}

	cout << "---end of list---" << endl;

}

void displayBusSet(Bus b) {

	displayCH();
	cout << setfill(' ') << left << setw(15) << b.getId();
	cout << setw(21) << b.getManufacturer();
	cout << setw(17) << b.getCapacity();
	cout << setw(15) << b.getMileage();
	cout << setw(15) << b.getStatus() << endl;

}

void displayCH() {

	cout << setfill('=') << setw(71) << "" << endl;
	cout << "Buss ID        Bus Manufacturer     Bus Capacity     Mileage     Status\n";
	cout << setfill('=') << setw(71) << "" << endl;

}


