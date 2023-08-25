#include "String.h"


int maxSize = 100;


String::String() {

	theString = new char[maxSize];
	len = 0;

}

String::String(const String& rhs) {

	theString = new char[maxSize];
	len = rhs.len;
	for (int i = 0; i < len; i++) {

		theString[i] = rhs.theString[i];

	}


}

String::String(const char rhs[]) {

	theString = new char[maxSize];
	len = 0;

	for (int i = 0; i < maxSize && rhs[i] != '\0'; i++) {

		theString[i] = rhs[i];
		len++;


	}


}


String::~String() {

	delete[] theString;

}

int String::length() {

	return len;

}


String& String::operator=(const String& rhs) {

	if (this != &rhs) {

		len = rhs.len;
		for (int i = 0; i < len; i++) {

			theString[i] = rhs.theString[i];

		}

	}


	return *this;
}

String& String::operator=(const char rhs[]) {

	len = 0;

	for (int i = 0; i < maxSize && rhs[i] != '\0'; i++) {

		theString[i] = rhs[i];
		len++;


	}


	return *this;
}

char& String::operator[] (int i) {

	if (i < 0 || i >= len) {

		string s = "Out of bounds error";

		throw(s);

	} else {

		return theString[i];

	}

}

bool String::operator==(String& rhs) {

	if (len == 0 || rhs.len == 0) {

		return 0;

	}

	bool temp = (rhs.len == len);

	for (int i = 0; i < len; i++) {

		if (!temp) {
			return 0;
		}

		temp = (rhs[i] == theString[i]);

	}

	return 1;


}

ostream& operator<<(ostream & os, String& rhs) {

	for (int i = 0; i < rhs.len; i++) {

		cout << rhs.theString[i];

	}

	return os;
}


