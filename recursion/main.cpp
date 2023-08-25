#include <iostream>

using namespace std;

int factorial(int i) {

	if (i == 1) {

		return 1;

	} else {

		return i * factorial(i - 1);

	}

}


int main() {


	cout << "Enter number: ";
	int temp;
	cin >> temp;

	while (temp != 0) {

		cout << "Factorial of " << temp << " is: " << factorial(temp) << endl;
		cout << "Enter number: ";
		cin >> temp;


	}

}
