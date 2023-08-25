#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {

	float f = 1;
	float * fp = &f;
	int x = *(reinterpret_cast<int*>(fp));
	cout << x << endl;

	string s = "hello";
	cout << s << endl;

	ofstream outFile;
	outFile.open("0307.file", ios::out);

	if (!outFile.is_open()) {
		exit (4);
	}

	int num = 5678;
	float t = 5678.0f;
	//outFile << s << num;
	int * ip = &num;


	//make num look like a char array
	outFile.write(reinterpret_cast<char *>(ip), 4);   //character array, length



	//cstrings
	//convert large strings into small ones

	char largeString[100];
	char smallString[11];

	//take the 10th thru 19th characters from large and put them into small

	for (int i = 10, j = 0; i < 20; i ++, j++) {

		smallString[j] = largeString[i];

	}

	smallString[10] = '\0';

	//put individual characters into a char array
	smallString[0] = 'b';
	smallString[1] = 'y';
	smallString[2] = 'e';

	//convert a number in a char array into numerics
	//the number in the char array must be a c-string

	smallString[0] = '1';
	smallString[1] = '2';
	smallString[2] = '3';
	smallString[3] = '\0';

	int i = atoi(smallString);
	cout << i << endl;

	//copy one string into another
	//both string are in large character arrays

	char large1[1000] = {'a', 'b', 'c', '\0'};
	char large2[1000];


	i = 0;
	for (; i < 1000 && large1[i] != '\0'; i++) {

		large2[i] = large1[i];

	}

	large2[i] = '\0';

//	cout << large2 << endl;
//
//	//there are LOTS of c-string functions
//	strcpy(large2, large1);
//
//	//strings
//	//convert large strings into small ones
//	string l, s;
//	s = l.substr(4, 5);
//
//	//take the 10th thru 19th characters from large and put them into small
//	s = l.substr(10, 10);
//
//	//combine strings
//	string m;
//	l = m + s;

	return 0;
}
