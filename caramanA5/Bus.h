#ifndef BUS_H_
#define BUS_H_

#include <string>
#include "MaintHist.h"

using namespace std;


/*	Represents a bus with an id, manufacturer, passanger capacity, mileage and status (a - active, m - in maintanance, r - removed from service)
 */
class Bus {

private:

	string id;
	string manufacturer;
	int capacity;
	int mileage;
	char status;

public:

	// points to the array that stores all the maintenance history
	MaintHist * maintHistory;
	int numMH;

	Bus();

	// copy constructor
	Bus(Bus &);
	string getId();
	string getManufacturer();
	int getCapacity();
	int getMileage();
	char getStatus();
	void setId(string);
	void setManufacturer(string);
	void setCapacity(int);
	void setMileage(int);
	void setStatus(char);
	static int numberOfBuses;

	// operator overloads
	const Bus operator=(Bus&);
	bool operator==(Bus&);
	bool operator>(Bus&);

	// destructor - deallocates memory for maintHistory
	~Bus();

};


#endif
