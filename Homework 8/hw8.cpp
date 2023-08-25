#include "funcs.hpp"

int main() {

	vector<Customer> customerInfo;
	string customerName;
	vector<Car> carLot;
	carLot = {

			{"Honda Insight", "White", 2019, 40440, 24399.99, USED, AVAILABLE},
			{"Mercedes GL550", "Black", 2008, 135458, 12999.99, USED, AVAILABLE},
			{"Acura RDX", "Red", 2022, 5, 58000.62, NEW, AVAILABLE},
			{"Ford Mach-E", "Gray", 2021, 12, 70354.70, NEW, AVAILABLE},
			{"Nissan 350z", "Gray", 2003, 149800, 8500.00, USED, AVAILABLE}

	};

	int userC = 0;

	while (haveCars(carLot)) {

		cout << "Welcome to my car dealership! Here is my current inventory:\n";
		displayLot(carLot);

		do {

			cout << endl;
			cout << "If you want to purchase a car, enter their lot number.\n";
			cout << "Or, enter 0 if you wish to leave my dealership.\n";
			cout << "Your choice: ";
			cin >> userC;

		} while (!validLot(carLot, userC));

		if (userC == 0) {
			cout << "Okay, sorry we didn't have a good car for you :(\n\n";
			continue;
		}

		cout << "What is your name?\n";
		cin.ignore();
		getline(cin, customerName);
		customerInfo.push_back({customerName, carLot.at(userC - 1)});
		cout << "Thanks for your purchase, I hope you enjoy your car!\n\n";

		carLot.at(userC - 1).stat = PURCHASED;


	}

	cout << "The dealership is now closed!\n\n";
	cout << "Here is a list of today's customers and their purchase:\n";
	for (Customer& elem: customerInfo) {
		cout << "\t" << elem.name << " purchased a " << elem.vehicle.year << " " << elem.vehicle.makeModel << " for $" << elem.vehicle.price << endl;
	}


	return 0;
}




