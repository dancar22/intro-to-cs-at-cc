#include "Vehicles.h"


// Functions for Vehicle

// constructor for vehicle
Vehicle::Vehicle(string id, string man, string date, int cap, char stat) {

	vehicleID = id;
	manufacturer = man;
	dateES = date;
	capacity = cap;
	status = stat;

}

// common display function that displays all the information any vehicle will have
void Vehicle::commonInfoDisplayFunction() {

	cout << "Information for vehicle with id: " << vehicleID << endl;
	cout << "\tmanufacturer: " << manufacturer << endl;
	cout << "\tdate entered service: " << dateES << endl;
	cout << "\tcapacity: " << capacity << endl;
	cout << "\tstatus: " << status << endl;

}

// returns the id of the vehicle
string Vehicle::getID() {
	return vehicleID;
}



// Functions for Bus

// constructor for bus, also calls the vehicle constructor
Bus::Bus(string id, string man, string date, int cap, char stat, int miles, string tires, int fuel) : Vehicle (id, man, date, cap, stat) {

	msi = miles;
	tireSize = tires;
	fuelTank = fuel;

}

// virtual display function, uses vehicle's common display function
void Bus::virtualDisplayFunction() {

	commonInfoDisplayFunction();

	cout << "Type (Bus) Specific information" << endl;
	cout << "\tmiles since last inspection: " << msi << endl;
	cout << "\ttire size: " << tireSize << endl;
	cout << "\tfuel tank size in gallons: " << fuelTank << endl;

}

// virtual maintenance functions, puts bus into maintenance if it has done 15000 miles or more since last maintenance
void Bus::virtualMaintenanceChecking() {

	if (status == 'M') {

		cout << "Vehicle " << vehicleID << " is currently in maintenance mode" << endl;

	} else if (msi >= 15000) {

		cout << "Vehicle " << vehicleID << " is going into maintenance mode" << endl;
		status = 'M';

	} else {

		cout << "Vehicle " << vehicleID << " does not need maintenance" << endl;

	}

}


// Functions for Minibus

// constructor for Minibus, also calls the vehicle constructor
Minibus::Minibus(string id, string man, string date, int cap, char stat, int miles, int power, char fuel) : Vehicle (id, man, date, cap, stat) { // vehicleID; manufacturer, dateES, capacity, status, msi, tireSize, fuelTank

	msi = miles;
	pot = power;
	fuelType = fuel;

}

// virtual display function, uses vehicle's common display function
void Minibus::virtualDisplayFunction() {

	commonInfoDisplayFunction();

	cout << "Type (Minibus) Specific information" << endl;
	cout << "\tmiles since last inspection: " << msi << endl;
	cout << "\tpower on time since last inspection (hours): " << pot << endl;
	cout << "\tfuel type: " << fuelType << endl;

}

// virtual maintenance functions, puts minibus into maintenance if its fuel type is electric and it has over 1000 hours or if the fuel type is fossil and has over 15000 miles since last inspection
void Minibus::virtualMaintenanceChecking() {

	if (status == 'M') {

		cout << "Vehicle " << vehicleID << " is currently in maintenance mode" << endl;

	} else if ((fuelType == 'E' && pot >= 1000) || (fuelType == 'F' && msi >= 15000)) {

		cout << "Vehicle " << vehicleID << " is going into maintenance mode" << endl;
		status = 'M';

	} else {

		cout << "Vehicle " << vehicleID << " does not need maintenance" << endl;

	}

}



// Functions for LightRail

// constructor for LightRail, also calls the vehicle constructor
LightRail::LightRail(string id, string man, string date, int cap, char stat, int power, string motor, char wheel) : Vehicle (id, man, date, cap, stat) { // vehicleID; manufacturer, dateES, capacity, status, msi, tireSize, fuelTank

	pot = power;
	motorType = motor;
	wheelType = wheel;

}

// virtual display function, uses vehicle's common display function
void LightRail::virtualDisplayFunction() {

	commonInfoDisplayFunction();


	cout << "Type (LightRail) Specific information" << endl;
	cout << "\tpower on time since last inspection (hours): " << pot << endl;
	cout << "\tmotor type: " << motorType << endl;
	cout << "\twheel type: " << wheelType << endl;

}

// virtual maintenance funciton, puts lightrail into maintanance if its power on time is 1000 hours or more
void LightRail::virtualMaintenanceChecking() {

	if (status == 'M') {

		cout << "Vehicle " << vehicleID << " is currently in maintenance mode" << endl;


	} else if (pot >= 1000) {

		cout << "Vehicle " << vehicleID << " is going into maintenance mode" << endl;
		status = 'M';

	} else {

		cout << "Vehicle " << vehicleID << " does not need maintenance" << endl;

	}

}




