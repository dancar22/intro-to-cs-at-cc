#include <iostream>
#include <fstream>
#include <iomanip>
#include "functions.h"
#include "Bus.h"

using namespace std;

//make the size of the array of buses a constant global integer variable
const int SIZE = 50;



int main() {

	//array to manage all the buses in the file
	Bus busSet[SIZE];

	//open the data file
	ifstream inFile;
	inFile.open("a4data.txt", ios::in);

	//quit program if file fails to open
	if (!inFile.is_open()) {

		cout << "open failure" << endl;
		exit(1);

	}

	//processing the data from the file into the array of buses
	string input;
	getline(inFile, input);
	int i = 0;

	while (!inFile.eof() && Bus::numberOfBuses < SIZE) {

		i = 0;
		busSet[Bus::numberOfBuses].setId(input.substr(i, 5));
		i += 5;
		busSet[Bus::numberOfBuses].setManufacturer(input.substr(i, 10));
		i += 10;
		busSet[Bus::numberOfBuses].setCapacity(stoi(input.substr(i, 3)));
		i += 3;
		busSet[Bus::numberOfBuses].setMileage(stoi(input.substr(i, 7)));
		i += 7;
		busSet[Bus::numberOfBuses].setStatus(input[i]);

		Bus::numberOfBuses++;
		getline(inFile, input);

	}


	//close the data file since it is no longer needed
	inFile.close();

	//display the bus data collected from the file
	displayBusSet(busSet, Bus::numberOfBuses);


	/*	present user with a menu of options for what can be done with the data
	 * 	D - will display all the data again
	 * 	L bus id - will display data for a bus with a specific id
	 * 	C bus id character - will change the status of the bus with the given id to the given character
	 */

	string userInput;
	cout << "Enter transaction code (M=create maintenance history, L=list a bus, C=compare maintenance, N=create and copy new bus, D=display all, X=exit)" << endl;
	getline(cin, userInput);

	//Presents the user with menu options, enter 'X' to exit
	while (userInput[0] != 'X') {

		//	Displays all the bus objects
		if (userInput[0] == 'D') {

			displayBusSet(busSet, Bus::numberOfBuses);

		} else if (userInput[0] == 'L') {

			int i = 0;

			for (; (i < Bus::numberOfBuses) && (busSet[i].getId() != userInput.substr(2, 5)) ; i++) {}

			if (busSet[i].getId() == userInput.substr(2, 5)) {

				displayBusSet(busSet[i]);



			} else {

				cout << "Not found" << endl;

			}

		// Compares two buses based on how many maintenance instances they have
		} else if (userInput[0] == 'C') {

			string id1, id2;
			int pos1 = 0, pos2 = 0;

			cout << "Enter bus ID for the first bus" << endl;
			getline(cin, id1);


			cout << "Enter bus ID for the second bus" << endl;
			getline(cin, id2);

			bool found1 = false;
			bool found2 = false;


			for (; (pos1 < Bus::numberOfBuses) && (busSet[pos1].getId() != id1) ; pos1++) {}
			if (busSet[pos1].getId() == id1) {
				found1 = true;
			}

			for (; (pos2 < Bus::numberOfBuses) && (busSet[pos2].getId() != id2) ; pos2++) {}
			if (busSet[pos2].getId() == id2) {
				found2 = true;
			}

			if (found1 && found2) {

				if (busSet[pos1] == busSet[pos2]) {

					cout << "The buses have the same amount of maintenance history" << endl;

				} else if (busSet[pos1] > busSet[pos2]) {

					cout << "Bus " << busSet[pos1].getId() << " has more maintenance history than bus " << busSet[pos2].getId() << endl;

				} else {

					cout << "Bus " << busSet[pos2].getId() << " has more maintenance history than bus " << busSet[pos1].getId() << endl;


				}


			} else {

				// Let the user know which bus was not found in the array
				if (!found1 && !found2) {

					cout << "Not found: Bus 1 and Bus 2" << endl;

				} else if (!found1) {

					cout << "Not found: Bus 1" << endl;

				} else {

					cout << "Not found: Bus 2" << endl;

				}

			}

		// Lets the user add an instance of maintenance to a bus object
		} else if (userInput[0] == 'M') {

			string id, date, type, mechanic;
			cout << "Enter bus ID" << endl;
			getline(cin, id);

			int counter = 0;

			for (; (counter < Bus::numberOfBuses) && (busSet[counter].getId() != id) ; counter++) {}

			if (busSet[counter].getId() == id) {

				cout << "Enter maintanance date" << endl;
				getline(cin, date);
				cout << "Enter maintanance type" << endl;
				getline(cin, type);
				cout << "Enter maintanance mechanic" << endl;
				getline(cin, mechanic);
				busSet[counter].maintHistory[busSet[counter].numMH].mainMechanic = mechanic;
				busSet[counter].maintHistory[busSet[counter].numMH].maintDate = date;
				busSet[counter].maintHistory[busSet[counter].numMH].maintType = type;
				busSet[counter].numMH++;
				cout << "Maintanance element added to bus " << busSet[counter].getId() << endl;



			} else {

				cout << "Not found" << endl;

			}


		// Lets the user add a new bus by copying information from an existing one
		} else if (userInput[0] == 'N') {

			string newId, oldId;
			cout << "Enter bus ID for the new bus" << endl;
			getline(cin, newId);
			cout << "Enter bus ID for the existing bus" << endl;
			getline(cin, oldId);

			int counter = 0;

			for (; (counter < Bus::numberOfBuses) && (busSet[counter].getId() != oldId) ; counter++) {}

			if (busSet[counter].getId() == oldId) {

				busSet[Bus::numberOfBuses] = busSet[counter];
				busSet[Bus::numberOfBuses].setId(newId);

				cout << "Bus " << busSet[Bus::numberOfBuses].getId() << " created" << endl;
				Bus::numberOfBuses++;


			} else {

				cout << "Not found" << endl;
			}



		}

		//present the user with the menu options once again
		cout << "Enter transaction code (M=create maintenance history, L=list a bus, C=compare maintenance, N=create and copy new bus, D=display all, X=exit)" << endl;
		getline(cin, userInput);

	}


	//exit the program
	cout << "Thank you have a nice day!" << endl;
	return 0;

}
