#include <iostream>

using namespace std;



int main() {


	const int SIZE_C = 6;
	char greeting[SIZE_C] = {'H', 'E', 'L', 'L', 'O', '!'};
	for (char element : greeting) {
		cout << element;
	}
	cout << endl;

	//create an array of integers
	const int SIZE = 8;
	int scores[SIZE] = {32, 28, 14, 24, 20, 28, 36, 27};



	//printing array elements
	cout << "The 5th element is " << scores[4] << endl;

	//let the user enter a number for the 3rd element
	cout << "Enter a number: ";
	cin >> scores[2];
	cout << "The 3rd element is " << scores[2] << endl;

	//let the user pick the index number and the new value
	int userIndex = 0;
	cout << "Enter an index number: ";
	cin >> userIndex;
	cout << "Enter a number: ";
	cin >> scores[userIndex];

	for (int i = 0; i < SIZE; i++) {

		cout << scores[i] << endl;

	}

	//create array of float values
	const int SIZE_B = 4;
	float budgetBalances[SIZE_B];

	//let the user initialize the array
	for (int i = 0; i < SIZE_B; i++) {

		cout << "Enter a budget balance: ";
		cin >> budgetBalances[i];

	}

	for (int i = 0; i < SIZE_B; i++) {

		cout << budgetBalances[i] << endl;

	}






	return 0;
}
