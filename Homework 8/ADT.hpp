#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

enum Previous {

	USED, NEW

};

enum Status {

	AVAILABLE, PURCHASED

};

struct Car {

	string makeModel, color;
	int year, mileage;
	double price;
	Previous prev;
	Status stat;

};

struct Customer {

	string name;
	Car vehicle;

};
