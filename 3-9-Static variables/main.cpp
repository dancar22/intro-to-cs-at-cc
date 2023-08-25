#include <iostream>
#include "Airplane.h"

using namespace std;

int main() {

	cout << Airplane::numberOfPlanes << endl;

	//double pointer
	//dynamic pointer array

	Student * * pointerArrayPointer;
	cout << "Enter number of students: " << endl;
	int numberOfStudents = 0;
	cin >> numberOfStudents;
	pointerArrayPointer = new Student * [numberOfStudents];

	pointerArrayPointer[0] = new Student;

	delete pointerArrayPointer[0];
	delete[] pointerArrayPointer;





	int numberOfPlanes = 0;
	Airplane p1;
	Airplane p2;
	Airplane p3;


	Airplane * p;
	p = &p1;
	cout << p << endl;

	int * ip;

	ip = &p1.capacity;

	cout << ip << endl;

	cout << Airplane::numberOfPlanes << endl;

	Airplane::xyz("hello world");
	zyx("hello world");




	return 0;
}
