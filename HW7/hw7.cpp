#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>

bool verify(char pwd[], const int SIZE, unsigned& score);
bool sameCategory(char first, char second);

using namespace std;

/*	Description:
 * 		Starting point of the program. Gets the password from the user and then uses the verify function to verify and asses it
 * 	Input:
 * 		N/A
 * 	Output:
 * 		An integer that signals the exit code to the operating system (OS)
 */
int main() {

	cout << setfill('+') << setw(60) << "" << endl;
	cout << "Welcome to my password verifier and strength score program!\n";
	cout << "Your password must contain all of the following conditions:\n";
	cout << "\t1. Contain at least twelve characters\n";
	cout << "\t2. Contain at least one lowercase letter\n";
	cout << "\t3. Contain at least one uppercase letter\n";
	cout << "\t4. Contain at least one digit\n";
	cout << "\t5. Contain at least one punctuation mark\n";
	cout << "\t6. Cannot contain any whitespace\n";
	cout << setfill('+') << setw(60) << "" << endl << endl << endl;

	bool pass = true;
	unsigned score = 0;

	do {

		if (!pass) {

			cout << "The password is not valid, try again\n";

		}

		const int SIZE = 31;
		char pwd[SIZE];
		cout << "Enter your password: ";
		cin.getline(pwd, SIZE);
		pass = verify(pwd, SIZE, score);

	} while (!pass);

	cout << "You entered a valid password!\n";
	cout << "Password strength: " << score << endl;

}

/*	Description:
 * 		Checks if the passwords meets all the requirements and gives it a score
 * 	Input:
 * 		A C String that represents the password
 * 		An integer that represents the size of the string
 * 		A reference variable unsigned to which the score of the password will be stored to
 * 	Output:
 * 		A boolean value that represents whether teh password passed the testing
 */
bool verify(char pwd[], const int SIZE, unsigned& score) {

	if (strlen(pwd) < 12) {

		return false;

	}

	bool whiteSpace = false;

	for (int i = 0; i < strlen(pwd); i++) {

		if (isspace(pwd[i])) {

			whiteSpace = true;

		}

	}

	if (whiteSpace) {

		return false;

	}

	bool hasLower = false, hasUpper = false, hasDigit = false, hasPunct = false;

	for (int i = 0; i < strlen(pwd); i++) {

		if (isupper(pwd[i])) {

			hasUpper = true;

		} else if (islower(pwd[i])) {

			hasLower = true;

		} else if (isdigit(pwd[i])) {

			hasDigit = true;

		} else if (ispunct(pwd[i])) {

			hasPunct = true;

		}

	}

	if (!hasLower || !hasUpper || !hasDigit || !hasPunct) {

		return false;

	}

	score = strlen(pwd);

	for (int i = 1; i < strlen(pwd); i++) {

		if(!sameCategory(pwd[i], pwd[i-1])) {

			score++;

		}

	}

	return true;

}

/*	Description:
 * 		Checks whether two characters fall into the same category (based on the password conditions)
 * 	Input:
 * 		A character that will be compared to another one
 * 		A character that will be compared to the first one
 * 	Output:
 * 		A boolean value that represents whether the two characters fall into the same category
 */
bool sameCategory(char first, char second) {

	bool sameC = false;

	if (isupper(first) && isupper(second)) {

		sameC = true;

	} else if (islower(first) && islower(second)) {

		sameC = true;

	} else if (isdigit(first) && isdigit(second)) {

		sameC = true;

	} else if (ispunct(first) && ispunct(second)) {

		sameC = true;

	}

	return sameC;
}
