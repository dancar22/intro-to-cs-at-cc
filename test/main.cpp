#include <iostream>
#include "Vehicles.h"
#include <iomanip>
#include <fstream>

using namespace std;

void displayAll(Vehicle * fleet[], int SIZE) {

	for (int i = 0; i < SIZE; i++) {

		fleet[i] -> virtualDisplayFunction();

	}

}


int main() {

	const int SIZE = 100;
	Vehicle * fleet[SIZE];
	int numVehicles = 0;

	ifstream inFile;
	inFile.open("a8data.txt", ios::in);

	if (!inFile.is_open()) {

		cout << "open failure" << endl;
		exit(1);

	}

	string input;
	getline(inFile, input);
	int i;

	while (!inFile.eof() && numVehicles < SIZE) {

		i = 0;
		string id = input.substr(i, 5);


		numVehicles++;

		getline(inFile, input);


	}



	return 0;
}


