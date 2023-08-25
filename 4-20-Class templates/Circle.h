/*
 * Circle.h
 *
 *  Created on: Apr 20, 2022
 *      Author: dancar
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>

using namespace std;

template <class T, class T2, class T3> // use class or typename
class Circle {

private:

	T radius;
	T diameter;
	T2 circumference;
	T3 area;


public:

	void setRadius(T r);
	void doTheCalculations();
	T3 getArea();
	Circle();


};


template <class T, class T2, class T3>
void Circle<T, T2, T3>::setRadius(T r) {
	radius = r;
	cout << "The name of the type: " << typeid(r).name() << endl;
}

template <class T, class T2, class T3>
void Circle<T, T2, T3>::doTheCalculations() {
		diameter = 2 * radius;
		circumference = 3.14 * 2 * radius;
		area = 3.14 * radius * radius;
}
template <class T, class T2, class T3>
T3 Circle<T, T2, T3>::getArea() {
	return area;
}

template <class T, class T2, class T3>
Circle<T, T2, T3>::Circle() {
	radius = 0;
	doTheCalculations();
}


#endif /* CIRCLE_H_ */
