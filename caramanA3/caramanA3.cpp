#include <iostream>
#include <fstream>
#include "Student.h"
#include "AgeCalc.h"
#include <iomanip>


using namespace std;

//defining the size of the student pointer array as a global variable
const int SIZE = 100;

int main() {

	//banana!!!
	//creating an ifstream object and opening the file of data
	ifstream inFile;
	inFile.open("/Users/dancar/Desktop/Computer science/CS 2/a2data.input", ios::in);

	if (!inFile.is_open()) {

		cout << "open failure" << endl;
		exit(1);

	}


	//creating pointer array of students to manage all the data
	Student * studentArray[SIZE];
	int numStudents = 0;

	for (int i = 0; i < SIZE; i++) {

		studentArray[i] = nullptr;

	}

	char input[52];

	char tempFirst[11], tempMiddle[11], tempLast[21], tempID[9], tempAge[4];
	char tempCC;
	Student * tempP = nullptr;

	tempAge[3] = '\0';
	tempFirst[10] = '\0';
	tempMiddle[10] = '\0';
	tempLast[20] = '\0';
	tempID[8] = '\0';

	inFile.read(input, 52);

	while (!inFile.eof()) {

		int i = 0;


		studentArray[numStudents] = new Student;

		//point temp p to the same object as the pointer in the array
		//I did this to make my code look a little cleaner and easier to understand
		tempP = studentArray[numStudents];

		numStudents++;

		for (; i < 10; i++) {

			tempFirst[i] = input[i];

		}



		for (int j = 0; j < 10; j++, i++) {

			tempMiddle[j] = input[i];

		}


		for (int j = 0; j < 20; j++, i++) {

			tempLast[j] = input[i];

		}


		tempCC = input[i];
		i++;

		for (int j = 0; j < 8; j++, i++) {

			tempID[j] = input[i];

		}


		for (int j = 0; j < 3; j++, i++) {

			tempAge[j] = input[i];

		}


		tempP -> firstName = tempFirst;
		tempP -> middleInitial = tempMiddle[0];
		tempP -> lastName = tempLast;
		tempP -> campusCode = tempCC;
		tempP -> studentID = tempID;
		tempP -> age = atoi(tempAge);

		inFile.read(input, 52);

	}

	//Display all the student data
	cout << "Last name           MI    First Name       Campus Code     Sequence   Age\n";
	cout << setfill('=') << setw(73) << "" << endl;



	for (int i = 0; i < numStudents; i++) {


		cout << setfill(' ') << setw(20) << left << studentArray[i] -> lastName;
		cout << setw(8) << studentArray[i] -> middleInitial;
		cout << setw(20) << studentArray[i] -> firstName;
		cout << setw(11) << studentArray[i] -> campusCode;
		cout << setw(12) << studentArray[i] -> studentID;
		cout << setw(4) << studentArray[i] -> age;
		cout << endl;


	}

	cout << setfill('=') << setw(73) << "" << endl;

	//Invoking the ageCalc function and displaying calculated data
	Student * youngestStudent = nullptr;
	int avAge = ageCalc(studentArray, youngestStudent);

	cout << "Average age: " << avAge << endl;
	cout << "Youngest student: " << youngestStudent -> firstName << endl;


	//Cleaning up :)
	inFile.close();
	for (int i = 0; i < numStudents; i++) {

		delete studentArray[i];

	}



	return 0;

}
