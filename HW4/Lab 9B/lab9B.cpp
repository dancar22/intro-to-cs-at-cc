#include <iostream>
#include <string>

using namespace std;

int main() {

	string message;
	cout << "Enter a message: ";
	getline(cin, message);

	while (message.length() < 5 || message.length() > 10) {

		cout << "Invalid! Message must be between 5 and 10 characters.\nEnter a message: ";
		getline(cin, message);

	}

	cout << "Countdown initiating . . .\n";

	int i = message.length();

	while (i > 0) {

		if (i == 1) {

			cout << i << endl;

		} else {

			cout << i << ", ";

		}

		i--;

	}

	cout << "Blast off to Planet " << message << "!" << endl;


	return 0;
}
