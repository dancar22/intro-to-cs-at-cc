#include <iostream>
#include <string>

using namespace std;

struct Car {

	int modelYear;
	string make;
	string model;
	int numOfSeats;
	bool fuelType; //0 for gas or hybrid, 1 for electric


};

int main() {

	Car myCar = {
			2019, "Honda", "Insight", 5, 0
	};

	Car yourCar;
	cout << "What is the model year of your car? ";
	cin >> yourCar.modelYear;
	cout << "What is the make of your car? ";
	cin.ignore();
	getline(cin, yourCar.make);
	cout << "What is the model of your car? ";
	getline(cin, yourCar.model);
	cout << "How many people can your car seat? ";
	cin >> yourCar.numOfSeats;
	cout << "What type of fuel does your car use? (0 for gas or hybrid, 1 for electric): ";
	cin >> yourCar.fuelType;
	cout << endl;

	cout << "Information about my car:\n";
	cout << "\tModel Year: " << myCar.modelYear << endl;
	cout << "\tMake: " << myCar.make << endl;
	cout << "\tModel: " << myCar.model << endl;
	cout << "\tNumber of seats: " << myCar.numOfSeats << endl;
	if (myCar.fuelType) {
		cout << "\tFuel type: electric\n";
	} else {
		cout << "\tFuel type: gas or hybrid\n\n";
	}

	cout << "Information about your car:\n";
	cout << "\tModel Year: " << yourCar.modelYear << endl;
	cout << "\tMake: " << yourCar.make << endl;
	cout << "\tModel: " << yourCar.model << endl;
	cout << "\tNumber of seats: " << yourCar.numOfSeats << endl;
	if (yourCar.fuelType) {
		cout << "\tFuel type: electric\n";
	} else {
		cout << "\tFuel type: gas or hybrid\n";
	}


	return 0;
}
