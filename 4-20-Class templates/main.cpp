#include <iostream>
#include "Circle.h"

using namespace std;

// Implement Circle using class template


int main() {

	Circle<long long int, double, float> c1;
	c1.setRadius(5);

//	Circle<float, double, int> c2;
//	Circle<double, int, int> c3;

//	c3.setRadius(45);
//	c3.doTheCalculations();
//	cout << c3.getArea();



	return 0;
}
