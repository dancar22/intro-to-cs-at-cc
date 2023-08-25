#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

void printParallel(double[], string[], const int);

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Creates two arrays. Uses loops to let
 *      the user populate the arrays. Calls function print out the arrays in
 *      parallel.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // declare first array
    const int SIZE = 5;
    double firstArray[SIZE];

    // TODO: range-based `for` loop to get user input for `firstArray`

    for (double& element: firstArray) {

    	cout << "Enter a floating-point number: ";
    	cin >> element;

    }


    // declare second array
    string secondArray[SIZE];

    // TODO: regular `for` loop to get user input for `secondArray`
    cin.ignore();
    for (int i = 0; i < SIZE; i++) {

    	cout << "Enter a name: ";
    	getline(cin, secondArray[i]);

    }

    // TODO: call the `printParallel` function
    printParallel(firstArray, secondArray, SIZE);

    // terminate
    return 0;
}

/*	Description:
 * 		Takes in two parallel arrays and their size and then prints out parallel entries
 * 	Input(s):
 * 		first parallel array of the data type double
 * 		second parallel array of the data type string
 * 		an integer that represents the size of the arrays
 * 	Output(s):
 * 		N/A
 */
void printParallel(double firstArray[], string secondArray[], const int size) {

	int i = 0;
	while (i < size) {

		cout << firstArray[i] << " " << secondArray[i] << endl;
		i++;
	}

}
