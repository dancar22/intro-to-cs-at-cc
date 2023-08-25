#include <iostream>

using namespace std;

//function prototypes
int getNumber();
string getMessage();
void repeat(int, string);
void displayMenu();
void choice1();
void choice2();
bool checkValidChoice(int);

/* Description:
 * 		Prompts the user for a number and a message and then prints the message number of times
 *
 * 	Input:
 * 		N/A
 *
 * 	Output:
 * 		An integer representing exit value
 *
 */

int main() {

	//menun driven program
	int userChoice = 0;


	do {

		displayMenu();

		userChoice = getNumber();
		if (!checkValidChoice(userChoice)) {

			cout << "Error, invalid menu option, please try again\n";
			continue;

		}

		switch (userChoice) {

			case 1: {
				cin.ignore();
				choice1();
				break;

			}

			case 2: {

				choice2();
				break;

			}

		}

	} while (userChoice != 3);

	cout << "Bye! Bye!\n";

	//repeat(getNumber(), getMessage());

	return 0;
}



/* 	Description:
 * 		Displays the menu to the user
 *
 * 	Parameters:
 * 		N/A
 *
 * 	Outputs:
 * 		N/A
 *
 */

void displayMenu() {

	cout << "Welcome to my program! Here are your options:\n";
	cout << "\t1. Repeat message\n";
	cout << "\t2. Add three numbers\n";
	cout << "\t3. Exit the program\n\n";

}


/* Description:
 * 		Prompts the user to enter a number and returns it
 *
 * Parameters:
 * 		N/A
 *
 * Outputs:
 * 		A number that the user has entered
 */
int getNumber() {

	int num = 0;
	cout << "Enter a number: ";
	cin >> num;
	return num;

}

/* Description:
 * 		Prompts the user to enter a message and returns it
 *
 * Parameters:
 * 		N/A
 *
 * Outputs:
 * 		A message that the user has entered
 */
string getMessage() {

	string message;
	cout << "Enter a message: ";
	getline(cin, message);
	return message;

}

/* Description:
 * 		Repeats a given message a given number of times
 *
 * Parameters:
 * 		num - the number of times a message will be repeated
 * 		msg - the message that will be repeated
 *
 * Outputs:
 * 		N/A
 */
void repeat(int num, string msg) {

	for (int i = 0; i < num; i++) {

		cout << msg << endl;

	}

}

void choice1() {

	int i = getNumber();
	cin.ignore();
	string s = getMessage();
	repeat(i, s);


}

void choice2() {

	cout << getNumber() + getNumber() + getNumber() << endl;

}

bool checkValidChoice(int userChoice) {

	return userChoice >= 1 && userChoice <= 3;

}



