#ifndef AIRPLANE_H_
#define AIRPLANE_H_
#include <iostream>

using namespace std;

class Airplane {

	public:
	string mfr;
	string model;
	int tailNum;
	int capacity;

	//creating first static variable

	static int numberOfPlanes;
	static int totalCapacity;
	static int numberOfBoeings;
	Airplane();
	void memberFunction();

	static void xyz(string);


};

void zyx(string);

class Student {

};


#endif /* AIRPLANE_H_ */
