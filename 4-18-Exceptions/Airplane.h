#ifndef AIRPLANE_H_
#define AIRPLANE_H_
#include <iostream>

using namespace std;

class Airplane;

class Student {

};

class Flight {
private:
	string origin;
	string destination;
	friend void flightFunction(Flight);


public:
	int flightNumber;


	void setFlightNumber(int);
};

class Airplane {

	friend Flight;

public:

	friend ostream& operator<< (ostream &os, Airplane rhs);
	string manufacturer;
	string model;
	int tailNum;
	int capacity;
	Flight flights[20];


	//creating first static variable

	static int numberOfPlanes;
	static int totalCapacity;
	static int numberOfBoeings;
	Airplane();
	void memberFunction();
	Flight& operator[](int);





};

#endif /* AIRPLANE_H_ */
