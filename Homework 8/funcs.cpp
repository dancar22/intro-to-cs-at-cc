#include "ADT.hpp"

string convert(Previous prev) {

	if (prev == 0) {

		return "used";

	} else if (prev == 1) {

		return "new";

	} else {

		return "N/A";

	}

}

string convert(Status stat) {

	if (stat == 0) {

		return "available";

	} else if (stat == 1) {

		return "purchased";

	} else {

		return "N/A";

	}

}

void displayCar(Car theCar) {

	cout << "\tA " << convert(theCar.prev) << " " << theCar.year << " " << theCar.makeModel << " in " << theCar.color << endl;
	cout << "\tMileage: " << theCar.mileage << endl;
	cout << "\tPrice $" << fixed << showpoint << setprecision(2) << theCar.price << endl;

}

void displayLot(const vector<Car>& theLot) {

	for (unsigned i = 0; i < theLot.size(); i++) {

		if (theLot.at(i).stat == AVAILABLE) {

			cout << "Lot " << i + 1 << " contains:\n";
			displayCar(theLot.at(i));

		}
	}

}

bool haveCars(const vector<Car>& theLot) {

	bool avail = false;
	for (Car elem: theLot) {

		if (elem.stat == 0) {
			avail = true;
		}

	}

	return avail;

}

bool validLot(const vector<Car>& theLot, int lot) {

	if (lot == 0) {
		return true;
	}

	if (lot > 0 && lot < 6 && theLot.at(lot - 1).stat == 0) {

		return true;

	} else {

		return false;

	}

}




