#include <iostream>

using namespace std;

/*	command line arguments
 *
 * int - count of parameters (command line arguments)
 * pointer array - each pointer points to a command line argument
 */


int main(int count, char * ptrarray[], char * envptrarray[]) {

	cout << "parameter count: " << count << endl;
	cout << ptrarray[0] << endl; //path to executable
	cout << ptrarray[1] << endl; //first cla
	cout << ptrarray[2] << endl; //second cla
	cout << ptrarray[2][1] << endl; //second char of the second CLA

	cout << "*****************************" << endl;


	for (int i = 0; envptrarray[i] != nullptr; i++) {

		cout << envptrarray[i] << endl;

	}







	return 0;
}
