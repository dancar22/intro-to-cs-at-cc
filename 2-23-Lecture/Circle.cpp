#include "Circle.h"
#include <iostream>
#include <cmath>


using namespace std;

void Circle::setRadius (float r) {

	cout << "in setRadius this " << this << endl;

	this -> radius = r;

}

void Circle::doCalc() {

		diameter = radius * 2;
		circumference = 2 * 3.14 * radius;
		area = 3.14 * radius * radius;


}

float Circle::getDiameter() {

	return diameter;

}

float Circle::getCircumference() {

	return circumference;

}

float Circle::getArea() {

	return area;

}

Circle::Circle() {

	cout << "in constructor" << endl;
	radius = 0;
	cout << sqrt(radius) << endl;

}



