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
		busSet[Bus::numberOfBuses].setStatus(input[0]);

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
	cout << "Enter transaction code (D=display, L=list a bus, C=change, X=exit)" << endl;
	getline(cin, userInput);

	while (userInput[0] != 'X') {


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

		} else if (userInput[0] == 'C') {

			int i = 0;
			for (; (i < Bus::numberOfBuses) && (busSet[i].getId() != userInput.substr(2, 5)) ; i++) {}

			if (busSet[i].getId() == userInput.substr(2, 5)) {

				busSet[i].setStatus(userInput[8]);
				cout << "Change successful" << endl;

			} else {

				cout << "Not found" << endl;

			}


		}

		//present the user with the menu options once again
		cout << "Enter transaction code (D=display, L=list a bus, C=change, X=exit)" << endl;
		getline(cin, userInput);

	}

	//exit the program
	cout << "Thank you have a nice day!" << endl;
	return 0;

}
