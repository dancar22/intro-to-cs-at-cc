#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

void printParallel(vector<double>&, vector<string>&);

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
    vector<double> firstVector(5);

    // range-based `for` loop to get user input
    for (double& elem : firstVector) {
        cout << "Enter a floating-point number: ";
        cin >> elem;
    }

    // declare second array
    vector<string> secondVector;

    // `for` loop to get user input
    string name;
    cin.ignore();
    for (unsigned i = 0; i < firstVector.size(); i++) {
        cout << "Enter a name: ";
        getline(cin, name);
        secondVector.push_back(name);
    }

    // function call
    printParallel(firstVector, secondVector);

    // terminate
    return 0;
}

/*******************************************************************************
 *  Description:
 *      Uses a `while` loop to print the two arrays in parallel.
 *
 *  Input(s):
 *      darr       - an array of `double` elements
 *      sarr       - an array of `string` elements
 *      ARRAY_SIZE - a constant integer that represents how many elements exist
 *                   in the arrays
 *
 *  Output:
 *      N/A
*******************************************************************************/

void printParallel(vector<double>& dvect, vector<string>& svect) {
    unsigned i = 0;
    while (i < dvect.size()) {
        cout << dvect.at(i) << ' ' << svect.at(i) << endl;
        i++;
    }
}
