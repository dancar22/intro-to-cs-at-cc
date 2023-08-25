#include <iostream>
#include "Vehicles.h"
#include <iomanip>
#include <fstream>

using namespace std;

void displayAll(Vehicle * fleet[], int SIZE);

int main() {

	// size of the fleet array using vehicle pointers
	const int SIZE = 100;
	Vehicle * fleet[SIZE];
	// keep track of the number of allocated vehicle objects
	int numVehicles = 0;

	// opening data file
	ifstream inFile;
	inFile.open("a8data.txt", ios::in);

	if (!inFile.is_open()) {

		cout << "open failure" << endl;
		exit(1);

	}


	// putting all the data from the file into dynamically allocated objects pointed to by the pointer array
	string input;
	getline(inFile, input);
	int i;

	//general
	string id, manufacturer, dateES, capacity, status;

	//class specific
	string msi, tireSize, fuelTank, pot, fuelType, motorType, wheelType;

	while (!inFile.eof() && numVehicles < SIZE) {

		i = 0;
		id = input.substr(i, 5);
		i += 5;
		manufacturer = input.substr(i, 15);
		i += 15;
		dateES = input.substr(i, 8);
		i += 8;
		capacity = input.substr(i, 3);
		i += 3;
		status = input[i];
		i++;

		// depending on the type of vehicle data is processed differently
		switch(id[0]) {

		case 'B':

			msi = input.substr(i, 6);
			i += 6;
			tireSize = input.substr(i, 9);
			i += 9;
			fuelTank = input.substr(i, 13);

			fleet[numVehicles] = new Bus(id, manufacturer, dateES, stoi(capacity), status[0], stoi(msi), tireSize, stoi(fuelTank));


			break;

		case 'M':

			msi = input.substr(i, 6);
			i += 6;
			pot = input.substr(i, 4);
			i += 4;
			fuelType = input[i];

			fleet[numVehicles] = new Minibus(id, manufacturer, dateES, stoi(capacity), status[0], stoi(msi), stoi(pot), fuelType[0]);


			break;

		case 'L':

			pot = input.substr(i, 4);
			i += 4;
			motorType = input[i];
			i++;
			wheelType = input[i];

			fleet[numVehicles] = new LightRail(id, manufacturer, dateES, stoi(capacity), status[0], stoi(pot), motorType, wheelType[0]);


			break;


		}


		numVehicles++;
		getline(inFile, input);

	}

	// displaying all vehicles to show that they were created correctly
	displayAll(fleet, numVehicles);

	string userInput;

	// asking user for vehicle id they want information on and check maintanance
	cout << "\nENTER VEHICLE ID:\n";
	getline(cin, userInput);

	while (userInput != "00000") {

		int i = 0;

		// linear search for the ID that the user entered
		for (; fleet[i]->getID() != userInput && i < numVehicles; i++) {}

		if (fleet[i]->getID() == userInput) {

			cout << '\n';
			fleet[i]->virtualDisplayFunction();
			cout << '\n';
			fleet[i]->virtualMaintenanceChecking();
			cout << '\n';



		} else {

			cout << "\n!VEHICLE NOT FOUND!\n" << endl;

		}



		cout << "ENTER VEHICLE ID:\n";
		getline(cin, userInput);

	}


	cout << endl;

	// displaying all vehicles before program ends
	displayAll(fleet, numVehicles);



	return 0;
}




/*	Displays all vehicles pointed to by a given pointer array using the virtual display function
 *
 * 	fleet - vehicle pointer array that will be displayed
 * 	SIZE - the size of the fleet array
 *
 */
void displayAll(Vehicle * fleet[], int SIZE) {

	cout << setfill('*') << setw(50) << "" << endl;
	cout << "\tDisplaying Data for Every Vehicle" << endl;
	cout << setfill('*') << setw(50) << "" << endl << endl;


	for (int i = 0; i < SIZE; i++) {

		fleet[i] -> virtualDisplayFunction();
		cout << endl << endl;

	}

	cout << setfill('*') << setw(50) << "" << endl;
	cout << "\t\tEnd of Display" << endl;
	cout << setfill('*') << setw(50) << "" << endl;

}


