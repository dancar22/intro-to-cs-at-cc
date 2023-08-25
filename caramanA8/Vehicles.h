#ifndef VEHICLES_H_
#define VEHICLES_H_

#include <iostream>

using namespace std;


class Vehicle {

protected:

	string vehicleID;
	string manufacturer;
	string dateES; // date entered service in YYYYMMDD form
	int capacity;
	char status; // A - active; I - inactive; M - in maintenance

public:
	Vehicle();
	Vehicle(string, string, string, int, char); // vehicleID; manufacturer, dateES, capacity, status
	virtual void virtualDisplayFunction() {}
	virtual void virtualMaintenanceChecking() {}
	void commonInfoDisplayFunction();
	string getID();
	virtual ~Vehicle(){}


};



class Bus : public Vehicle {

private:

	int msi; // miles since inspection
	string tireSize;
	int fuelTank; // size of the fuel tank in gallons

public:
	virtual void virtualDisplayFunction();
	virtual void virtualMaintenanceChecking();

	Bus(string, string, string, int, char, int, string, int); // vehicleID; manufacturer, dateES, capacity, status, msi, tireSize, fuelTank
	virtual ~Bus(){}



};

class Minibus : public Vehicle {

private:

	int msi; // miles since inspection
	int pot; // power on time since last inspection in hours
	char fuelType; // F - fossil fuel; E - electric

public:
	virtual void virtualDisplayFunction();
	virtual void virtualMaintenanceChecking();

	Minibus(string, string, string, int, char, int, int, char); // vehicleID; manufacturer, dateES, capacity, status, msi, pot, fuelType
	virtual ~Minibus(){}

};


class LightRail : public Vehicle {

private:

	int pot; // power on time since last inspection in hours
	string motorType;
	char wheelType;

public:
	virtual void virtualDisplayFunction();
	virtual void virtualMaintenanceChecking();

	LightRail(string, string, string, int, char, int, string, char); // vehicleID; manufacturer, dateES, capacity, status, pot, motorType, wheelType
	virtual ~LightRail(){}



};




#endif
