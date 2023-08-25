#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char cstrA[] = "hello there user!";
	char cstrB[] = "here";

	cout << strstr(cstrA, cstrB) << endl;

	char userC;
	cout << "Enter a character: ";
	cin >> userC;

	if(isalpha(userC)) {

		cout << "You entered a letter!\n";

	} else {

		cout << "Wait, that is not a letter" << endl;
	}

	//test out the tolower and toupper functions

	char lowerC = tolower(userC);
	cout << "Lowercase version: " << lowerC << endl;
	cout << "Uppercase version: " << static_cast<char>(toupper(userC)) << endl;

	char myCStr[] = "Good morning"; //size 13 because of the \0 (null character)
	cout << myCStr << endl;


	const int SIZE = 10;
	char userCStr[SIZE];
	cout << "Enter your message: ";
	cin.ignore();
	cin.getline(userCStr, SIZE);
	cout << "You entered: " << userCStr << endl;



	return 0;
}
