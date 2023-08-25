#include <cmath>
#include <iostream>

using namespace std;



/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

int getUserNumber();
bool isValid(int);
void calculate(int, int, int, int&);

/*******************************************************************************
 *  int main()
 *      Starting point of the program. Gets three valid numbers from the user.
 *      Calculates and displays the result.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main()
{
    // TODO: get the first valid number
	int num1 = getUserNumber();

    // TODO: get the second valid number
	int num2 = getUserNumber();

    // TODO: get the third valid number
	int num3 = getUserNumber();
    // TODO: calculate the result by calling the function
	int result = 0;
	calculate(num1, num2, num3, result);
    // TODO: display the result
	cout << result << endl;

    // terminate
    return 0;
}

/*******************************************************************************
 *	Description:
 * 		Prompts the user to enter a number until the value is valid and then returns it
 * 	Input:
 * 		N/A
 * 	Output:
 * 		A valid number that the user has entered
*******************************************************************************/

int getUserNumber()
{
    // TODO
	int num = 0;
	do {

		cout << "Enter a number: ";
		cin >> num;

	} while (!isValid(num));

	return num;

}

/*******************************************************************************
 *	Description:
 *		Checks if the parameter variable passes a condition
 *	Input:
 *		An integer that will be checked
 *	Output:
 *		Boolean value that says whether the value is valid
*******************************************************************************/

bool isValid(int num)
{
    // TODO
	return (num >= 29) || ((num / 2 + 3) <= 11);
}

/*******************************************************************************
 * 	Description:
 * 		Stores the value of a formula into a variable
 * 	Input:
 * 		first integer that will be used in the formula
 * 		second integer that will be used in the formula
 * 		third integer that will be used in the formula
 * 		a reference variable that the result of the formula will be stored into
 * 	Output:
 * 		N/A
*******************************************************************************/

void calculate(int a, int b, int c, int& result)
{
    // TODO
	result = 4 * a + pow(b, 3) - 2 * c + 1;
}
