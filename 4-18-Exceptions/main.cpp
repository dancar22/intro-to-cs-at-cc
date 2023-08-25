#include <iostream>
#include "Airplane.h"
#include <fstream>

using namespace std;

int theFunc() {

//	string s = "oops";
//
//	throw();
}

void openFile() {

	ifstream thefile;
	thefile.open("this is the path");
	if (!thefile.is_open()) {

		string s = "error file did not open";
		throw (s);

	}

}

int main() {

	try {

		openFile();

		return 0;

	} catch (string &m) {
		// handle the exception

		cout << m << endl;

	}

//	} catch (const out_of_range &m) {
//
//
//
//
//
//	}




	return 0;
}
