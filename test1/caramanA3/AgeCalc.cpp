#include "AgeCalc.h"


int ageCalc(Student * studentArr[], Student *& youngStudent) {

	//first point youngStudent to a nullptr
	youngStudent = nullptr;

	int total = 0;
	int numStudents = 0;
	//set lowest age to the age of the first student in the array
	int lowestAge = studentArr[0] -> age;

	int i = 0;

	while (studentArr[i] != nullptr && i < 100) {

		//update number of students and the total age
		numStudents++;
		total += studentArr[i] -> age;

		//if the student is the youngest so far update all necessary information
		if (studentArr[i] -> age < lowestAge) {

			lowestAge = studentArr[i] -> age;
			youngStudent = studentArr[i];


		}

		i++;

	}


	if (numStudents > 0) {

		//calculates and returns the average age
		return total / numStudents;

	} else {

		return -1;

	}


}
