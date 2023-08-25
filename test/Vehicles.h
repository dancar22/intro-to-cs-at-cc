#ifndef VEHICLES_H_
#define VEHICLES_H_

#include <iostream>

using namespace std;


class Vehicle {

private:

	string vehicleID;
	string manufacturer;
	string dateES; // date entered service in YYYYMMDD form
	int capacity;
	char status; // A - active; I - inactive; M - in maintenance

public:
	virtual void virtualDisplayFunction();
	void commonInfoDisplayFunction();


};



class Bus : public Vehicle {

private:

	int msi; // miles since inspection
	string tireSize;
	int fuelTank; // size of the fuel tank in gallons

public:
	virtual void virtualDisplayFunction();


};

class Minibus : public Vehicle {

private:

	int msi; // miles since inspection
	int pot; // power on time since last inspection in hours
	char fuelType; // F - fossil fuel; E - electric

public:
	virtual void virtualDisplayFunction();


};


class LightRail : public Vehicle {

private:

	int pot; // power on time since last inspection in hours
	string motorType;
	char wheelType;

public:
	virtual void virtualDisplayFunction();



};




#endif
