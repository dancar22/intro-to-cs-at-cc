#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // display the menu options
    const char FILL  = '-';
    const int  WIDTH = 40;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "1. Calculate the length of a sentence\n";
    cout << "2. Validate inside a range\n";
    cout << "3. Validate outside a range\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // get the user's choice
    unsigned userChoice = 0;
    cout << "Enter the option you want: ";
    cin  >> userChoice;
    cin.ignore();

    // TODO: option 1

    if (userChoice == 1) {
    	string sentance;
    	cout << "Enter a sentence: ";
    	getline(cin, sentance);
    	cout << "The sentance has " << sentance.length() << " characters\n";
    }

    // TODO: option 2

    else if (userChoice == 2) {

    	const int MAX = 63, MIN = 25;
    	int x;
    	cout << "I'm going to check if the number you enter is between " << MIN << " and " << MAX << " using logic!\n";
    	cout << "Enter a number: ";
    	cin >> x;
    	if (x >= MIN && x <= MAX) {
    		cout << "Your number is between " << MIN << " and " << MAX << endl;
    	} else {
    		cout << "Nah, you can't fool me! That number is NOT between " << MIN << " and " << MAX << endl;
    	}

    }

    // TODO: option 3

    else if (userChoice == 3) {

    	const int MAX = 147, MIN = -54;
    	int x;
    	cout << "I'm going to check if the number you enter is outside the range of " << MIN << " and " << MAX << " using magic!\n";
    	cout << "Enter a number: ";
    	cin >> x;
    	if (x < MIN || x > MAX) {
    		cout << "Your number is outside of the range of " << MIN << " and " << MAX << endl;
    	} else {
    		cout << "No fooling my magical logic! That number is in between " << MIN << " and " << MAX << endl;
    	}

    }

    // good bye message
    cout << "Good bye! Thanks for using my program :)\n";

    // terminate
    return 0;
}
