#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//global variable
double budget = 1312.58;

//function prototypes
void square(double&);
void square(double&, double&);
int square(int);
int twoReturnValues (string&);
string getMessage(int = 2, int = 3);
float subtract(float, float = 1.5f, float = 0.94f);

int main() {
	cout << "Budget: $" << budget << endl;


	// creating a reference variable
	int numBananas = 0;
	int& bananaRef = numBananas;
	cout << "Enter how many bananas you have: ";
	cin >> numBananas;
	if (numBananas < 0) {

		cout << "ERROR! Negative bananas don't exist!\n";
		exit(EXIT_FAILURE);

	}
	cout << "You have " << numBananas << " bananas\n";
	bananaRef++;
	cout << "You have " << numBananas << " bananas\n";
	numBananas -= 5;
	cout << "You have " << bananaRef << " bananas\n";

	//another reference variable
	bool wearJacket = true;
	bool& jacketRef = wearJacket;
	cout << "Am i wearing a jacket? The answer is " << jacketRef << endl;
	wearJacket = false;
	cout << "Am i wearing a jacket? The answer is " << jacketRef << endl;

	//calling the square function
	double theNumber = 4.1;
	double secondNumber = 6.71;
	cout << "theNumber before function call: " << theNumber << endl;
	square(theNumber);
	cout << "theNumber before function call: " << theNumber << endl;

	//calling the twoReturnValues function
	string msg = "Hello";
	int result = twoReturnValues(msg);
	cout << "result: " << result << endl;
	cout << "new message: " << msg << endl;

	//calling the other versions of the square
	int answer = square(5);
	cout << "The answer is " << answer << endl;

	for (int i = 0; i < 3; i++) {
		square(theNumber, secondNumber);
		cout << "The results are " << theNumber << ", " << secondNumber << endl;
	}

	cout << getMessage(9,7) << endl;
	cout << getMessage() << endl;
	cout << getMessage(6) << endl;

	cout << subtract(4.5f, 1.5f, 2.7f) << endl;
	cout << subtract(4.5f, 1.5f, 2.7f) << endl;
	cout << subtract(4.5f) << endl;


	return 0;

}

int square(int num) {

	cout << "Calling the int version of square \n";
	cout << "Budget is $" << budget << endl;
	return num * num;

}


void square(double& num) {

	cout << "Calling the single, double version of a square!\n";
	budget -= 5.24;
	num *= num;

}

void square(double& num, double& numB) {

	//create a static variable
	static char myLetter = 'A';
	cout << "myLetter: " << myLetter << endl;
	myLetter++;

	cout << "Calling the double, double version of a square!\n";
	num *= num;
	numB *= numB;

}



int twoReturnValues(string& s) {

	s += 'y';
	return s.length();

}

string getMessage(int num1, int num2) {

	if (num1 + num2 == 5) {

		return "Hello!";

	} else {

		return "Ice Cream";

	}

}

float subtract(float a, float b, float c) {

	return a - b - c;

}
