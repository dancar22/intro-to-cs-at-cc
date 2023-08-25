#include <iostream>

using namespace std;

int getNumber();
string getMessage();
void repeat(int, string);


int main() {

	repeat(getNumber(), getMessage());

	return 0;
}


/* Description:
 * 		Promts the user to enter a number and returns it
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
 * 		Promts the user to enter a message and returns it
 *
 * Parameters:
 * 		N/A
 *
 * Outputs:
 * 		A message that the user has entered
 */
string getMessage() {

	string message;
	cin.ignore();
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

		cout << msg << endl << endl;

	}

}



