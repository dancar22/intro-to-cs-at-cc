#include <iostream>

using namespace std;

class Airplane {

	//data members
	//public or private
private :
	string manufacturer;
	string model;
	int tailNumber;
public	:
	string airLine;
	int numPass;
	string seat[300];

	//member functions

	void increaseCapacity() {

		numPass++;

	}

};

class Circle {

	private:

		float radius;
		float diameter;
		float circumference;
		float area;

	public:

		Circle() {

			radius = 0;
			doCalc();

		}

	public:

		void setRadius (float r) {

			radius = r;

		}

		void doCalc() {

			diameter = radius * 2;
			circumference = 2 * 3.14 * radius;
			area = 3.14 * radius * radius;


		}

		float getDiameter() {

			return diameter;

		}

		float getCircumference() {

			return circumference;

		}

		float getArea() {

			return area;

		}



};

int main() {


	Airplane p1;
	p1.airLine = "United";

	Circle c1, c2;


	int tempR = 0;
	cout << "Enter the radius of the circle: ";
	cin >> tempR;
	c1.setRadius(tempR);
	c1.doCalc();

	float a = c1.getArea();
	cout << a << endl;

	// case 3

	Circle * p;
	p = new Circle;

	p -> setRadius(6);
	p -> doCalc();
	cout << p -> getArea() << endl;
	delete p;

	// case 5
	Circle * pa[100];
	pa[0] = new Circle;
	delete pa[0];



	return 0;
}




