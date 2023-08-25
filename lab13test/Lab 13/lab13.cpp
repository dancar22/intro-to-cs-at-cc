#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void displayMenu();

void option1();
double option2(double);
void option3();
void option4();

int main() {

	int userChoice = 0;

	do {

		displayMenu();
		cout << "Enter your choice: ";
		cin >> userChoice;

		if (userChoice < 1 || userChoice > 5) {

			cout << "Invalid input! Choose one of the options!\n";
			continue;

		}

		switch(userChoice) {

			case 1: {

				cin.ignore();
				option1();
				break;

			}

			case 2: {

				double priceOfHouse = 0;
				cout << "Enter the price of the house: ";
				cin >> priceOfHouse;
				cout << "\tDown payment should be $" << option2(priceOfHouse) << "!\n\n";
				break;

			}

			case 3: {

				option3();
				break;

			}

			case 4: {
				option4();
				break;

			}


		}


	} while (userChoice != 5);

	cout << "Have a good day!\n";

}

void displayMenu() {

	cout << "Welcome to our program! Here are your options:\n\n";
	cout << "\t1. Combine the length of two messages\n";
	cout << "\t2. Get an estimated down payment on a house\n";
	cout << "\t3. Create a random number with the user bounds and display roots of it\n";
	cout << "\t4. Calculate the tips of the customer and splitting the bill into how many are in the group\n";
	cout << "\t5. Exit the program\n\n";

}

//option by Dan Caraman
/*
 * 	Description:
 * 		the function will promt the user for two different strings. It will then print out the combined length of the two strings
 *
 * 	Input:
 * 		N/A
 *
 * 	Output:
 * 		N/A
 *
 */
void option1() {

	string msg1, msg2;
	cout << "Enter the first message: ";
	getline(cin, msg1);
	cout << "Enter the second message: ";
	getline(cin, msg2);
	cout << "\tTotal length of the two messages is " << msg1.length() + msg2.length() << " characters.\n\n";

}

//option by Eduardo Meraz
/*description: calculates %20 down payment of a house

input: price of house

output: down payment*/

double option2(double priceOfHouse) {

	double price = priceOfHouse * .20;
	return price;

}

/*
 * option by Neil Johnson

description:
create a random number with the user bounds and display roots of it
inputs:
user number
output:
the square root cube root and fourth root of the random number
*/
void option3() {

	 int min = 0, max = 0;
	 cout << "Enter the maximum value: ";
	 cin >> max;
	 cout << "Enter the minimum value: ";
	 cin >> min;

	 srand(time(0));

	 int random = min + rand() % (max - min + 1);

	 double square = pow(random, 0.5);
	 double fourth = pow(random, 0.25);
	 double eighth = pow(random, 0.125);

	 cout << "The random number is: " << random << endl;
	 cout << "The square root is " << square << endl;
	 cout << "The fourth root is " << fourth << endl;
	 cout << "The eighth root is " << eighth << endl << endl;
 }


/*option by Raphael Borlongan

Description: calculate the tips of the customer and splitting the bill it into how many are in the group
input: bill and the amount of tips percentage
output: the total of the bill +tips and the total after the split
*/

void option4(){
	double bill;
	double tips;
	int people;

	cout << "Welcome to the tip calculator\n";
	cout << "What is the total of your bill?\n";
	cin >> bill ;

	cout << "choose how much percentage you want for tips\n"
	<< "10, 15, 20, or put your own amount:";

	cin >> tips;

	if (tips == 10){
		bill += (tips/100) * bill;
	}else if (tips == 15){
		bill += (tips/100) * bill;
	}else if (tips == 20){
		bill += (tips/100) * bill;
	}else {
		 bill += (tips/100) * bill;
	}

	cout << "your total bill + tips is $" << bill << endl;
	cout << "how many people?";
	cin >> people;
	cout << "Splitting the bill into " << people << " and each one will pay: $" << bill/people << endl;

	cout << "Thank your for using tip calculator!!";

}

