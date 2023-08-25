#ifndef STRING_H_
#define STRING_H_

#include <iostream>
using namespace std;



class String {

private:

	int len;
	char * theString;

public:

	String();
	String(const String&);
	String(const char[]);
	~String();

	int length();
	String& operator=(const String&);
	String& operator=(const char[]);
	char& operator[](int);
	bool operator==(String &);
	friend ostream& operator<<(ostream &, String &);

};


#endif
