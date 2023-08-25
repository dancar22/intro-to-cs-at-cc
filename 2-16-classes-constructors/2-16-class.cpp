#include <iostream>
#include "IceCream.h"

using namespace std;

int main() {

	IceCream obj1;

	cout << obj1.getFlavor() << endl;
	obj1.pickFlavor("chocolate");
	cout << obj1.getFlavor() << endl;

	string toppings[2] = {"peanuts", "hot fudge"};

	obj1.addTopping(toppings, 2);

	obj1.printToppings();

	IceCream obj3("strawberry");

	cout << obj3.getFlavor() << endl;
	obj3.eat();
	cout << "You pick a flavor: ";
	string userFlavor;
	getline(cin, userFlavor);

	obj3.pickFlavor(userFlavor);


	return 0;
}
