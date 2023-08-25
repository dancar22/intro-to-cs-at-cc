#include "car.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	Car * c = nullptr;
	c = new Car(4, "BMW", "SUV");

	cout << c->getBrand() << endl;

	delete c;

	const int SIZE = 100;

	Car * b[SIZE];


	string brand, type, seats;

	int counter = 0;

	while(1) {

		cout << "Enter your car brand: ";
		getline(cin, brand);

		if(brand == "EXIT") {

			break;

		}

		cout << "Enter your car type: ";
		getline(cin, type);

		if (type == "EXIT") {

			break;

		}

		cout << "Enter the number of seats: ";
		getline(cin, seats);

		if (seats == "EXIT") {

			break;

		}

		b[counter] = new Car(stoi(seats), brand, type);

		cout << setfill('-') << setw(30) << "" << endl;

		cout << "Your car brand: " << b[counter] -> getBrand() << endl;
		cout << "Your car type: " << b[counter] -> getType() << endl;
		cout << "Your car's number of seats: " << b[counter] -> getNumSeats() << endl;

		cout << setfill('-') << setw(30) << "" << endl;

		counter++;

	}

	delete b[SIZE];






	return 0;
}
