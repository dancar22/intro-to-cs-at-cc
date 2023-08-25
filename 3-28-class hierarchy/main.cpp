#include <iostream>

using namespace std;

// static array of planes each containing a static array of flights
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
		Flight flights[20];
		int numberOfFlights;

		Airplane() {
			tailNumber = 0;
			capacity = 0;
			numberOfFlights = 0;

			for (int i = 0; i < 20; i++) {

				flights[i].flightNumber = 0;

			}
		}

		Airplane(int i) {
			tailNumber = i;
			capacity = 0;
			numberOfFlights = 0;

			for (int i = 0; i < 20; i++) {

					flights[i].flightNumber = 0;

			}

		}

};


int main() {

	Airplane planes[100];
	planes[0].tailNumber = 123;
	planes[0].manufactuter = "Airbus";
	planes[0].flights[0].flightNumber = 456;
	planes[0].flights[0].origin = "SFO";
	planes[0].numberOfFlights++;


	return 0;
}
