#include "funcs.hpp"

int main() {

	//CREATE COLOR VARIABLES
	Color myColor = BROWN;
	Color favoriteColor = ORANGE;
	const int SIZE = 3;
	Color arr[SIZE] = {RED, YELLOW, BLUE};

	cout << "My color is " << convert(myColor) << endl;

	for (Color elem: arr) {
		cout << convert(elem) << "\t";
	}
	cout << endl;

	//print out the available colors
	cout << "The available colors are: " << endl;
	for (int i = 0; i < 9; i++) {
		cout << '\t' << convert(static_cast<Color>(i)) << endl;
	}

	cout << endl;


	Color userColor;
	string tempString;
	cout << "Enter your color: ";
	getline(cin, tempString);
	userColor = createColor(tempString);

	cout << "You picked the color " << convert(userColor) << endl;

//	Color userColor;
//	cout << "Enter your color: ";
//	cin >> userColor;

//	Book myBook = {
//		"The Big Blue Book",
//		{"The Blue Person", 35},
//		"Mystery",
//		18.48
//
//	};
//
//	printInfo(myBook);
//	cout << endl;
//
//	cout << "Old price: $" << myBook.price << endl;
//	discount(myBook);
//	cout << "New price: $" << myBook.price << endl;
//	cout << endl;
//
//	Person me = {
//			"Turkey Man",
//			696969
//	};
//
//	printInfo(me);
//	cout << endl;
//
//	Book newBook = userBook();
//	cout << endl;
//	printInfo(newBook);

	return 0;

}

