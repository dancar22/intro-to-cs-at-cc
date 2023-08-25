#include "funcs.hpp"

void readCS1Format(fstream& firstFile) {

	while (!firstFile.eof()) {

			int theNumber;

			for (int i = 0; i < 7; i ++) {

				firstFile >> theNumber;
				cout << theNumber << " ";

			}

			cout << endl;

			string theMsg;
			firstFile.ignore();
			getline(firstFile, theMsg);
			cout << theMsg << endl;
			bool flagA, flagB;
			firstFile >> boolalpha >> flagA >> flagB;
			cout << boolalpha << flagA << '\t' << flagB << endl;

			double numA, numB;
			firstFile >> numA >> numB;
			cout << numA << "\n" << numB << endl;

		}

}

void readLineByLine(fstream& secondFile) {

	string line;

	while (!secondFile.eof()) {

			getline(secondFile, line);
			cout << line << endl;

		}

}

void dataTypeDemo() {

	int userNumber;

	do {
		cout << "Enter -1 to exit the loop: ";
		cin >> userNumber;

		if (cin.fail()) {
			cout << "Oops! Looks like you entered the wrong data type :(\n";
			cin.clear();
			cin.ignore(4096, '\n');

		}
	} while (userNumber != -1);
	cout << "You left the loop!\n";
}
