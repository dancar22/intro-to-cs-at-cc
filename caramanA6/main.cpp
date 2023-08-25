#include <iostream>
#include "String.h"
#include <cmath>

using namespace std;

int main() {

	//Testing different constructors
	String test1, test2 = "abcd", test3 = test2;

	//Testing = sign overload
	test1 = test3;

	//Testing << overload and .length function
	cout << "String test1 -->" << test1 << "<-- with length " << test1.length() << endl;
	cout << "String test2 -->" << test2 << "<-- with length " << test2.length() << endl;
	cout << "String test3 -->" << test3 << "<-- with length " << test3.length() << endl;

	//Testing the other = sign overload
	test1 = "1234";

	//Testing the [] overload
	cout << "test1[3] -->" << test1[3] << endl;

	//Testing the == sign overload
	if (test1 == test2 && test2 == test3) {

		cout << "The strings are equal\n";

	} else {

		cout << "The strings are not equal\n";

	}

	try {

		cout << "Trying to access test1[4]" << endl << test1[4] << endl;

	} catch (string &m) {

		cout << "Successfully caught exception:\n\t" << m << endl;

	}

	//Testing this format
	test3 = "1234";
	test3 = test2 = test1;
	cout << "String test1 -->" << test1 << "<-- with length " << test1.length() << endl;
	cout << "String test2 -->" << test2 << "<-- with length " << test2.length() << endl;
	cout << "String test3 -->" << test3 << "<-- with length " << test3.length() << endl;


	return 0;
}
