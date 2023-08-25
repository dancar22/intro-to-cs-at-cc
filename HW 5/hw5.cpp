#include <iostream>
#include <iomanip>

using namespace std;

void makePizza(string, string, bool = true, int = 8);

/*	Description:
 * 		Starting point of the program. Collects information from the user and then uses the makePizza function using that information
 * 	Input:
 * 		N/A
 * 	Output:
 * 		An integer that signals the exit code to the operating system (OS)
 */
int main() {

	cout << "Welcome to my pizza simulator!" << endl;
	string moreOrders;

	do {

		string name, toppings;
		bool cheese;
		string defaultChoices;

		cout << "To start, enter your name: ";
		getline(cin, name);
		cout << "Great, what kind of toppings do you want?" << endl;
		getline(cin, toppings);

		cout << "Awesome! By default, we add cheese and slice the pizza into 8.\nAre you okay with that?" << endl;
		getline(cin, defaultChoices);
		while (defaultChoices != "yes" && defaultChoices != "Yes" && defaultChoices != "no" && defaultChoices!= "No") {

			cout << "Invalid answer" << endl;
			cout << "Are you okay with the default choices? Enter Yes or No" << endl;
			getline(cin, defaultChoices);

		}

		if (defaultChoices == "yes" || defaultChoices == "Yes") {

			cout << "\n\n";
			makePizza(name, toppings);

		} else {

			cout << "Enter 1 if you want cheese, or 0 for no: ";
			cin >> cheese;

			cout << "Are you okay with the default 8 slices?" << endl;
			cin.ignore();
			getline(cin, defaultChoices);

			while (defaultChoices != "yes" && defaultChoices != "Yes" && defaultChoices != "no" && defaultChoices!= "No") {

				cout << "Invalid answer" << endl;
				cout << "Are you okay with the default choice? Enter Yes or No" << endl;
				getline(cin, defaultChoices);

			}

			if (defaultChoices == "Yes" || defaultChoices == "yes") {

				cout << "\n\n";
				makePizza(name, toppings, cheese);

			} else {

				int numSlices = 0;
				cout << "Enter the number of slices you want: ";
				cin >> numSlices;
				cout << "\n\n";
				makePizza(name, toppings, cheese, numSlices);
				cin.ignore();

			}

		}

		cout << "\n\nDo you want to order another pizza?" << endl;
		getline(cin, moreOrders);
		while (moreOrders != "yes" && moreOrders != "Yes" && moreOrders != "no" && moreOrders!= "No") {

			cout << "Invalid answer" << endl;
			cout << "Do you want to order another pizza? Enter Yes or No" << endl;
			getline(cin, moreOrders);

		}


	} while (moreOrders == "yes" || moreOrders == "Yes");

	cout << "Good bye! Thanks for playing my Pizza Simulator!" << endl;
	return 0;

}

/*	Description:
 * 		Will print out simplified steps in making a pizza based on the given parameters
 * 	Input:
 * 		name - the name of the customer
 * 		toppings - the toppings that will be on the pizza
 * 		cheese - whether the customer wants cheese on their pizza
 * 		slices - the number of slices the pizza will be cut into
 * 	Output:
 * 		N/A
 */
void makePizza(string name, string toppings, bool cheese, int slices) {

	static int numOrders = 0;

	cout << setfill('+') << setw(50) << "" << endl;
	cout << "Making a pizza for " << name << endl;
	cout << "Let's see . . . ";

	if (cheese) {

		cout << "adding cheese now!" << endl;

	} else {

		cout << "no cheese, got it." << endl;

	}

	cout << "Next, the toppings. ";

	if (toppings == "") {

		cout << "Actually scratch that, no toppings at all? Okay." << endl;

	} else {

		cout << "Adding " << toppings << endl;

	}

	cout << "Putting it in the oven . . . and done!" << endl;
	cout << "Now slicing this into " << slices << " slices." << endl;
	cout << "Order up for " << name << endl;
	numOrders++;
	cout << setfill('+') << setw(50) << "" << endl;
	cout << "Total orders so far: " << numOrders << endl;
	cout << setfill('+') << setw(50) << "" << endl;

}
