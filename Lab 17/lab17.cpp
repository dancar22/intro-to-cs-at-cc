#include <iostream>
using namespace std;

/*******************************************************************************
 *  Global variables
*******************************************************************************/

const int ROW_SIZE = 4;
const int COL_SIZE = 5;

/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

int total(const int[][COL_SIZE]);
double average(const int[][COL_SIZE]);

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Declares and initializes a 2D array.
 *      Displays the total sum and the average value.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // TODO: declare and initialize a 2D array
	int arrOne[ROW_SIZE][COL_SIZE] = {
			{117, -76, 128, -68,  85},
			{105,  34, -79,  54, 105},
			{-85, 151, 133, -50, 173},
			{-38, -20, 185, 173, -49}
	};

    // TODO: display the total sum
	cout << "Total: " << total(arrOne) << endl;

    // TODO: display the average
	cout << "Average: " << average(arrOne) << endl;


    // terminate
    return 0;
}

/*******************************************************************************
 *  Description:
 *      Determines the sum of all values in a given 2D array
 *
 *  Input(s):
 *      A 2D integer array of which the sum will be found of
 *
 *  Output:
 *      An integer value that represents the sum of all values in the array
*******************************************************************************/

int total(const int arrOne[][COL_SIZE]) {

	int rTotal = 0;
	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			rTotal += arrOne[i][j];
		}
	}

	return rTotal;

}

/*******************************************************************************
 *  Description:
 *      Calculates the average value of all values in a 2D integer array
 *
 *  Input(s):
 *      A 2D integer array of which the average will be found of
 *
 *  Output:
 *      A double value that represents the average of all values in the given array
*******************************************************************************/

double average(const int arrOne[][COL_SIZE]) {

	return static_cast<double>(total(arrOne)) / (COL_SIZE * ROW_SIZE);

}
