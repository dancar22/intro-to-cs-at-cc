/*
 * 1-31 calling functions.cpp
 *
 *  Created on: Jan 31, 2022
 *      Author: dancar
 */
#include <iostream>

using namespace std;

int theFunc1() {

	return 5;
}

int * theFunc2() {

	int a;
	a = 5;
	return &a;


}

int main() {

	int z;
	z = theFunc1();
	cout << "z = " << z << endl;

	int * p;
	p = theFunc2();


	cout << "*p = " << *p << endl;


	return 0;
}



