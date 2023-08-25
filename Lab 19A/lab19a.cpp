#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void testIsLower();
void testIsPunct();
void testIsDigit();
void testStrcmp();
void teststrcat();
void testStrLen();
void testStoi();
void testStoul();
void testToString();

int main() {

	string keepTesting;
	int choice = 0;

	do {

		do {

		cout << "You can experiment with nine functions!\n\tEnter 1 to experiment with islower\n\tEnter 2 to experiment with ispunct\n\tEnter 3 to experiment with isdigit\n";
		cout << "\tEnter 4 to experiment with strcmp\n\tEnter 5 to experiment with strcat\n\tEnter 6 to experiment with strlen\n";
		cout << "\tEnter 7 to experiment with stoi\n\tEnter 8 to experiment with stoul\n\tEnter 9 to Experiment with to_string\n";
		cout << "Enter your choice: ";
		cin >> choice;

		} while (choice < 1 || choice > 9);

		switch (choice) {

		case 1:

			testIsLower();
			cin.ignore();
			break;
		case 2:
			testIsPunct();
			cin.ignore();
			break;
		case 3:
			testIsDigit();
			cin.ignore();
			break;
		case 4:
			testStrcmp();
			break;
		case 5:
			teststrcat();
			break;
		case 6:
			testStrLen();
			break;
		case 7:
			testStoi();
			break;
		case 8:
			testStoul();
			break;

		case 9:
			testToString();
			break;
		}


		cout << "Do you want to keep on testing? ";
		getline(cin, keepTesting);


	} while (keepTesting == "Yes" || keepTesting == "yes");

	cout << "Goodbye!" << endl;



	return 0;
}

void testIsLower() {


	char userC;

	do {

		cout << "Enter a letter: ";
		cin >> userC;

	} while ((!isalpha(userC)));


	if (islower(userC)) {

		cout << "Your character is lower case!\n";

	} else {

		cout << "Your character is upper case!\n";

	}

}

void testIsPunct() {

	char userC;
	cout << "Enter a character: ";
	cin >> userC;

	if (ispunct(userC)) {

		cout << "Your character is a printable character other than a digit, letter, or space!\n";

	} else {

		cout << "Your character is not a printable character other than a digit, letter, or space!\n";
	}


}

void testIsDigit() {
	char userC;
	cout << "Enter a character: ";
	cin >> userC;

	if (isdigit(userC)) {

		cout << "Your character is a digit\n";

	} else {

		cout << "Your character is not a digit\n";
	}


}

void testStrcmp() {
	const int SIZE_1 = 50;
	char CStr1[SIZE_1];
	char CStr2[SIZE_1];
	cin.ignore();
	cout << "Enter the 1st string: ";
	cin.getline(CStr1, SIZE_1);
	cout << "Enter the 2nd string: ";
	cin.getline(CStr2, SIZE_1);

	if (strcmp(CStr1, CStr2) == 0) {
		cout << "Both strings are the same\n";
	} else {
		cout << "The strings are not the same\n";
	}
}

void teststrcat() {

	const int SIZE1 = 100;
	char sentence[SIZE1];
	cout << "Make a sentence our of 3 words\n";
	const int SIZE = 20;
	char strOne[SIZE];
	cout << "Enter the first word: ";
	cin.ignore();
	cin.getline(strOne, SIZE);
	strcat(sentence, strOne);
	char strTwo[SIZE];
	cout << "Enter the second word: ";
	cin.getline(strTwo, SIZE);
	strcat(sentence, strTwo);
	char strThree[SIZE];
	cout << "Enter the third word: ";
	cin.getline(strThree, SIZE);
	strcat(sentence, strThree);

	cout << sentence << endl;

}


void testStrLen() {

	const int SIZE = 100;
	char sentence[SIZE];
	cout << "Enter a sentance: ";
	cin.ignore();
	cin.getline(sentence, SIZE);
	cout << "Your sentence is " << strlen(sentence) << " characters long\n";

}

void testStoi() {

	string num1, num2;
	cout << "Enter the first number: ";
	cin.ignore();
	getline(cin, num1);
	cout << "Enter the second number: ";
	getline(cin, num2);
	cout << "Your values will first be stored as a string but then converted to an integer and added.\n";
	cout << "The sum of your numbers is " << stoi(num1) + stoi(num2) << endl;

}

void testStoul() {

	string num1, num2;
	cout << "Enter the first number: ";
	cin.ignore();
	getline(cin, num1);
	cout << "Enter the second number: ";
	getline(cin, num2);
	cout << stoul(num2) << endl;
	cout << "Your values will first be stored as a string but then converted to an unsigned integers and added.\n";
	cout << "The sum of your numbers is " << stoul(num1) + stoul(num2) << endl;


}

void testToString() {

	int firstInt = 0;
	char firstChar;
	string firstStr;
	cout << "Enter a string: ";
	cin.ignore();
	getline(cin, firstStr);
	cout << "Enter an integer: ";
	cin >> firstInt;
	cout << "Enter a character: ";
	cin >> firstChar;
	string sentence = firstStr + to_string(firstInt) + to_string(firstChar);
	cout << "Here is a string made of all data types you entered: " << sentence << endl;

}

