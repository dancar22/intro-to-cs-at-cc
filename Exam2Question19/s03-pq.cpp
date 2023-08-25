#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*******************************************************************************
*   Function prototypes
*******************************************************************************/

void augment(vector<double>& numbers, int index);
void calc(double& result, double x, double y = 1.5);

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Creates and initializes a vector.
 *      Augments the vector and calculates a final result.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {

    // seed the RNG
    srand(time(0));

    // TODO: declare the vector of size 6
    vector<double> myVec(6);

    // TODO: range-based `for` loop to initialize the vector
    for (double& element: myVec) {

    	cout << "Enter a number: ";
    	cin >> element;

    }

    // TODO: loop to call the `augment` function on each element
    for (int i = 0; i < myVec.size(); i ++) {

    	augment(myVec, i);

    }

    // variables
    double res = 0.0;
    string userYes;

    // determine if the user wants to enter a y-value
    cout << "Do you want to enter a y-value? ";
    cin.ignore();
    getline(cin, userYes);

    // branch and call the `calc` function
    if (userYes == "yes" || userYes == "Yes") {
        // TODO: call the `calc` function with user's y-value
    	cout << "Enter your custom y-value: ";
    	double y = 0.0;
    	cin >> y;
    	calc(res, myVec.at(rand() % (myVec.size() + 1)), y);
    }
    else {
        // TODO: call the `calc` function with default y-value
    	calc(res, myVec.at(rand() % (myVec.size() + 1)));
    }

    // display the result
    cout << "result: " << res << endl;

    // terminate
    return 0;
}

/*	Description:
 * 		The element of the given vector at the index will be multiplied by the variable alpha, then the variable alpha will be
 * 		multiplied by 5.2 divided by the size of the vector
 * 	Input:
 * 		A vector of double values
 * 		An integer that represents the index
 * 	Output:
 * 		N/A
 */
void augment(vector<double>& numbers, int index) {

	static double alpha = 3.27;
	numbers.at(index) *= alpha;
	alpha *= (5.2 / numbers.size());

}

/*	Description:
 * 		Applies the formula (x * y) / 3 + cos(y) and saves it into the given reference variable
 * 	Input:
 * 		A double reference variable to which the result will be store
 * 		a double value representing x
 * 		a double value representing y
 * 	Output:
 * 		N/A
 */
void calc(double& result, double x, double y) {

	result = (x * y) / 3 + cos(y);

}
