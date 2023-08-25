/*
 * IceCream.h
 *
 *  Created on: Feb 16, 2022
 *      Author: dancar
 */

#ifndef ICECREAM_H_
#define ICECREAM_H_

#include <iostream>

using namespace std;

enum cob {

	CUP, ONE, BOTH

};

class IceCream {
private:
	//attributes
	string flavor;
	float temp;
	string toppings[5];
	int quantity;
	cob cupCone;

public:

	IceCream();

	//constructor overload
	IceCream(string);

	void melt();
	void pickFlavor(string);
	void addScoop();
	void eat();
	void addTopping(string[], const int);
	void removeTopping(string[], const int);
	string getFlavor();
	void setCupCone(cob);
	cob getCupCone();
	void printToppings();
	void addTopping(string, int);



};

#endif /* ICECREAM_H_ */
