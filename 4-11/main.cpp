#include <iostream>
#include "Airplane.h"

using namespace std;

int main() {

	Airplane a;
	a.manufacturer = "Shoobbyb";
	Airplane b;
	b[4] = a[3];

	cout << a << b;

	cout << a.flights[3].flightNumber << endl;
	cout << b.flights[4].flightNumber << endl;


	return 0;

//	cerr << "hello" << endl;
//	Airplane a;
//	a.flights[12].setFlightNumber(69);
//	flightFunction(a.flights[12]);
//
//	int i = 3;
//	cout << i << endl;
//	string s = "abc";
//	cout << s << endl;
//	cout << a << endl;





	return 0;
}
