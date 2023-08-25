#include "Vehicles.h"


// Functions for Vehicle

void Vehicle::commonInfoDisplayFunction() {

	cout << "Information for vehicle with id: " << vehicleID << endl;
	cout << "\tmanufacturer: " << manufacturer << endl;
	cout << "\tdate entered service: " << dateES << endl;
	cout << "\tcapacity: " << capacity << endl;
	cout << "\tstatus: " << status << endl;

}


// Functions for Bus

void Bus::virtualDisplayFunction() {

	commonInfoDisplayFunction();

	cout << "Type (Bus) Specific information" << endl;
	cout << "\tmiles since last inspection: " << msi << endl;
	cout << "\ttire size: " << tireSize << endl;
	cout << "\tfuel tank size in gallons: " << fuelTank << endl;

}


// Functions for Minibus

void Minibus::virtualDisplayFunction() {

	commonInfoDisplayFunction();

	cout << "Type (Minibus) Specific information" << endl;
	cout << "\tmiles since last inspection: " << msi << endl;
	cout << "\tpower on time since last inspection (hours): " << pot << endl;
	cout << "\tfuel type: " << fuelType << endl;

}



// Functions for LightRail

void LightRail::virtualDisplayFunction() {

	commonInfoDisplayFunction();


	cout << "Type (LightRail) Specific information" << endl;
	cout << "\tpower on time since last inspection (hours): " << pot << endl;
	cout << "\tmotor type: " << motorType << endl;
	cout << "\twheel type: " << wheelType << endl;

}




