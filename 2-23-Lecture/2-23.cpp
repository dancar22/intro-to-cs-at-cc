#include <iostream>

using namespace std;

#include <iostream>
#include <cmath>
#include "Circle.h"
#include "GeoObject.h"
#include "functions.h"

using namespace std;

int main() {

	nonClassFunction();
	GeoObject g;

	Circle c1;
	Circle c2;
	cout << "address of c1 " << &c1 << endl;
	cout << "address of c2 " << &c2 << endl;


	c1.setRadius(2);
	c2.setRadius(43.4);



	c1.doCalc();
	float a = c1.getArea();
	cout << a << endl;

	Circle * p;
	p = new Circle;
	p -> setRadius(6);
	delete p;

	Circle * pa[100];
	pa[0] = new Circle;
	pa[0] -> setRadius(7);
	delete pa[0];







	return 0;
}




