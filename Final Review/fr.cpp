#include <iostream>
#include <string>
#include <cctype> 		// characters
#include <cstring> 		// C-srting
#include <fstream>
#include <vector>

using namespace std;

struct Pizza {

	int numSlices;
	double temperature;
	//cant use string type with binary files
	char toppings[50];
	bool flags[4]; 		// cheese, gluten, vegetarian, vegan

};

const int ROW = 5;
const int COL = 5;

int myStrLen(char[]);
double calcDiagonal(double[][COL]);

int main() {

	vector<Pizza> myVec; // empty vector

	do {

		Pizza userPizza;
		cout << "Enter the number of slices: ";
		cin >> userPizza.numSlices;

		cout << "Enter the desired temperature: ";
		cin >> userPizza.temperature;

		cout << "Enter the toppings: ";
		cin.ignore();
		cin.getline(userPizza.toppings, 50);

		cout << "Enter 1 for cheese or 0 for no: ";
		cin >> userPizza.flags[0];
		cout << "Enter 1 for gluten or 0 for no: ";
		cin >> userPizza.flags[1];
		cout << "Enter 1 for vegetarian or 0 for no: ";
		cin >> userPizza.flags[2];
		cout << "Enter 1 for vegan or 0 for no: ";
		cin >> userPizza.flags[3];

		myVec.push_back(userPizza);



	} while(myVec.size() < 3);

	cout << "Finished collecting pizza orders! Thanks!\n";

//	double testArr[ROW][COL] = {
//			{1.5, 3.6, 2.9, 0.08, -1.5},
//			{0.0, 1.7, 6.007, 10.98, 12.87},
//			{-0.07, -9.871, 54.78, 1.987, -48.579},
//			{0.0, 1.7, 6.007, 10.98, 12.87},
//			{1.5, 3.6, 2.9, 0.08, -1.5},
//	};
//
//	double result = calcDiagonal(testArr);
//	cout << "The sum of the diagonal is " << result << endl;


	//fstream with binary files

	fstream boFile;
	boFile.open("pizza-orders.dat", ios::out | ios::binary);
	Pizza myPizzaOrder = {
			8, 325.5, "cheese and sausage", {true, false, true, true}
	};

	boFile.write(reinterpret_cast<char*>(&myPizzaOrder), sizeof(myPizzaOrder));
	boFile.close();

	fstream biFile;
	biFile.open("pizza-orders.dat", ios::in | ios::binary);
	Pizza loadOrder;
	biFile.read(reinterpret_cast<char*>(&loadOrder), sizeof(loadOrder));
	biFile.close();

	cout << "Number of slices: " << loadOrder.numSlices << endl;
	cout << "Temperature: " << loadOrder.temperature << endl;
	cout << "Toppings: " << loadOrder.toppings << endl;
	cout << "Option flags:\n";
	cout << boolalpha;
	cout << "\tCheese: " << loadOrder.flags[0] << endl;
	cout << "\tGluten: " << loadOrder.flags[1] << endl;
	cout << "\tVegetarian: " << loadOrder.flags[2] << endl;
	cout << "\tVegan: " << loadOrder.flags[3] << endl;


	//C-string is a character array thats uses \0 as a way to "end" the string
//	char myName[] = "Carlos";
//	cout << myName << endl;
//
//	const int SIZE = 20;
//	char userMessage[SIZE];
//	cout << "Enter a message: ";
//	cin.getline(userMessage, SIZE);
//
//	cout << userMessage << endl;
//	cout << "The length of the message is: " << strlen(userMessage) << endl;
//	cout << "My length of the message is: " << myStrLen(userMessage) << endl;
//
//	int compResult = strcmp(myName, userMessage);
//
//	if (compResult == 0) {
//		cout << "Both strings are equal!\n";
//	} else if (compResult < 0) {
//		cout << "Second string is alphabetically greater than the first string\n";
//	} else {
//		cout << "First string is alphabetically greater than the second string\n";
//	}
//
//
//
//	char userChar;
//	cout << "Enter a character: ";
//	cin >> userChar;
//
//	if (isalnum(userChar)) {
//
//		cout << "You entered a letter or a digit :)\n";
//
//	} else {
//
//		cout << "You did not enter a letter or a digit :(\n";
//
//	}
//
//	do {
//
//		cout << "Enter another character: ";
//		cin >> userChar;
//
//	} while (ispunct(userChar));
//
//	cout << "Yay, you did not enter a punctuation mark!\n";
//
//	cout << "Enter yet another character: ";
//	cin.ignore();
//	cin.get(userChar);
//
//	if (isspace(userChar)) {
//		cout << "You entered a whitespace character, wow!\n";
//	} else {
//		cout << "Cool, no whitespace\n";
//	}



	return 0;
}

int myStrLen(char cstr[]) {

	int len = 0;
	for (;cstr[len] != '\0'; len++) {}
	return len;

}

double calcDiagonal(double twoDee[][COL]) {
	double sum = 0.0;

	for (int i = 0; i < COL; i++) {
		sum += twoDee[i][i];
	}
	return sum;
}
