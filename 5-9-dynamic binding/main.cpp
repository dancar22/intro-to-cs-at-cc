#include <iostream>



using namespace std;

class Beverage {

public:

	string name;
	int idealTemperature;
	virtual void displayMembers();

};

class Coffee : public Beverage {

public:

	int roast;
	int grind;
	virtual void displayMembers();


};

class Tea : public Beverage {

public:

	string color;
	int caffeineLevel;
	virtual void displayMembers();


};

void Beverage::displayMembers() {

	cout << "In Beverage displayMembers" << endl;
	cout << "Name of the beverage: " << name << endl << endl;

}

void Coffee::displayMembers() {

	cout << "In Coffee displayMembers" << endl;
	cout << "Name of the beverage: " << name << endl << endl;

}

void Tea::displayMembers() {

	cout << "In Tea displayMembers" << endl;

	cout << "Name of the beverage: " << name << endl << endl;

}




int main() {

	//ProduceItem lettuce("12345", "lettuce, romaine", 15, 2.00f, 3.50f, false, false, true, 'u', 3.50f);

	//cout << lettuce.getItemDesc();

	Beverage cola;
	Coffee espresso;
	Tea jasmine;

	cola.name = "coke zero";
	espresso.name = "latte";
	jasmine.name = "green jasmine";

	cola.displayMembers();
	espresso.displayMembers();
	jasmine.displayMembers();

	Beverage * b[100];
	b[0] = new Beverage;
	b[1] = new Coffee;
	b[2] = new Tea;

	b[0] -> name = "dynamic cola";
	b[1] -> name = "dynamic latte";
	b[2] -> name = "dynamic jasmine";

	b[0] -> displayMembers();
	b[1] -> displayMembers();
	b[2] -> displayMembers();


	return 0;
}
