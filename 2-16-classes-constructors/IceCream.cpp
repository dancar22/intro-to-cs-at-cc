/*
 * IceCream.cpp
 *
 *  Created on: Feb 16, 2022
 *      Author: dancar
 */

#include "IceCream.h"

IceCream::IceCream() {

	flavor = "vanilla";
	temp = 0.0f;
	quantity = 0;
	cupCone = BOTH;

}

IceCream::IceCream(string f) {

	flavor = f;
	temp = 0.0f;
	quantity = 0;
	cupCone = BOTH;

}

void IceCream::melt() {

	temp = 5.0f;
	quantity--;

}

void IceCream::pickFlavor(string s) {

	flavor = s;

}

void IceCream::addScoop() {

	quantity++;

}



void IceCream::eat() {

	quantity = 0;

}
void IceCream::addTopping(string tarr[], const int SIZE) {

	for (int i = 0; i < 5; i++) {

		toppings[i] = "";

	}

	for (int i = 0; i < SIZE; i++) {

		toppings[i] = tarr[i];

	}

}

void IceCream::removeTopping(string tarr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < 5; j++) {

			if (toppings[i] == tarr[j]) {

				toppings[i] = "";

			}

		}


	}

}

string IceCream::getFlavor() {
	return flavor;
}
void IceCream::setCupCone(cob c) {
	cupCone = c;
}

cob IceCream::getCupCone() {
	return cupCone;
}

void IceCream::printToppings() {

	for (int i = 0; i < 5; i++) {

		cout << toppings[i] << '\t';

	}

	cout << endl;

}

void IceCream::addTopping(string newT, int p) {

	toppings[p] = newT;

}


