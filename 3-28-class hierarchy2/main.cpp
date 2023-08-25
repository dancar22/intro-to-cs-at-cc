#include <iostream>

using namespace std;

// dyn array of planes each containing a dyn array of flights

class Flight {
public:

	int flightNumber;
	string origin;
	string destination;

};

class Airplane {

	public:

		int tailNumber;
		string manufactuter;
		string model;
		int capacity;
		Flight * flights[20];
		int numberOfFlights;


		Airplane() {
			tailNumber = 0;
			capacity = 0;
			numberOfFlights = 0;

			for (int i = 0; i < 20; i++) {

				flights[i] = new Flight;
				flights[i]->flightNumber = 0;


			}
		}

		Airplane(int i) {
			tailNumber = i;
			capacity = 0;
			numberOfFlights = 0;


			for (int i = 0; i < 20; i++) {

				flights[i] = new Flight;
				flights[i]->flightNumber = 0;

			}

		}

		~Airplane() {


			for (int i = 0; i < 20; i++) {

				delete flights[i];

			}

		}

};

int main() {


	Airplane * airplanes[100];

	for (int i = 0; i < 100; i++) {

		airplanes[i] = new Airplane;

	}

	airplanes[0] -> flights[0] -> flightNumber = 456;
	airplanes[0] -> flights[0] -> origin = "SFO";
	airplanes[0] -> numberOfFlights++;

	airplanes[0] -> flights[0] -> flightNumber = 456;
	airplanes[0] -> flights[0] -> origin = "DFW";
	airplanes[0] -> numberOfFlights++;


	for (int i = 0; i < 100; i++) {

		delete airplanes[i];



	}





	return 0;
}
