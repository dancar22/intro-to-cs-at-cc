#include <iostream>
#include <iomanip>

using namespace std;

/*	Employee class represents an employee
 *
 * 	data members:
 *
 * 		name - string that represents the name of the employee
 * 		hours - float that represents the hours the employee worked
 * 		rate - float that represents the rate the employee gets paid
 * 		regularPay - float that represents the amount the employee has to be paid excluding overtime pay
 * 		overTimePay - float that represents the amount the employee has to be paid for overtime
 * 		totalPay - float that represents the total amount the employee has to be paid
 *
 */
class Employee {

	private:

		string name;
		float hours;
		float rate;
		float regularPay;
		float overTimePay;
		float totalPay;

	public:

		/*	Default constructor - sets all numerical values to 0
		 */

		Employee() {

			hours = 0;
			rate = 0;
			regularPay = 0;
			overTimePay = 0;
			totalPay = 0;

		}

		/*	Used to set the name of the employee
		 *
		 * 	Input:
		 * 		n - string that will be the name
		 *
		 * 	Output:
		 * 		N/A
		 */
		void setName(string n) {

			name = n;

		}

		/*	Used to set the hours of the employee
		 *
		 * 	Input:
		 * 		h - float that will be the number of hours
		 *
		 * 	Output:
		 * 		N/A
		 */
		void setHours(float h) {

			hours = h;

		}

		/*	Used to set the rate of the employee
		 *
		 * 	Input:
		 * 		r - float that will be the rate of the employee
		 *
		 * 	Output:
		 * 		N/A
		 */
		void setRate(float r) {

			rate = r;

		}

		/*	Used to get the name of the employee
		 *
		 * 	Input:
		 * 		N/A
		 *
		 * 	Output:
		 * 		name - the name of the employee
		 */
		string getName() {

			return name;

		}


		/*	Used to get the hours of the employee
		*
		* 	Input:
		* 		N/A
		*
		* 	Output:
		* 		hours - float that represents the hours employee has worked
		*/
		float getHours() {

			return hours;

		}

		/*	Used to get the rate of the employee
		 *
		 * 	Input:
		 * 		N/A
		 *
		 * 	Output:
		 * 		rate - float that represents the rate
		 */
		float getRate() {

			return rate;

		}

		/*	Used to get the regular pay of the employee
		 *
		 * 	Input:
		 * 		N/A
		 *
		 * 	Output:
		 * 		regularPay - float that represents the amount the employee has to be paid excluding overtime pay
		 */
		float getRegularPay() {

			return regularPay;

		}


		/*	Used to get the overtime pay of the employee
		 *
		 * 	Input:
		 * 		N/A
		 *
		 * 	Output:
		 * 		float that represents the amount the employee has to be paid for overtime
		 */
		float getOverTimePay() {

			return overTimePay;

		}

		/*	Used to get the total pay of the employee
		 *
		 * 	Input:
		 * 		N/A
		 *
		 * 	Output:
		 * 		float that represents the total amount the employee has to be paid
		 */
		float getTotalPay() {

			return totalPay;

		}

		/*	After hours and rate have been set for the object this function can be used to calculate
		 *  and set regularPay, overTimePay, totalPay. After this the mentioned variables can be
		 *  accessed through the appropriate getters and setters
		 *
		 *  Input:
		 *  	N/A
		 *
		 *  Output:
		 *  	N/A
		 *
		 */

		void calculatePay() {

			float temp = 0;
			float thours = hours;

			if (thours > 40) {

				temp = thours - 40;
				thours = 40;

			}

			regularPay = thours * rate;
			overTimePay = 1.50 * rate * temp;
			totalPay = regularPay + overTimePay;

		}

};


int main() {


	string tName;
	float tHours = 0, tRate = 0, totalPay = 0;
	string stHours, stRate;

	//create an Employee pointer array of size 100
	Employee * staff[100];

	int index = 0;

	while(1) {

		cout << "Enter employee name\n";
		getline(cin, tName);


		//if the user enters "STOP" the program will end the loop
		if (tName == "STOP") {

			break;

		}


		tHours = 0;
		tRate = 0;

		//Allocate memory for the new Employee and point staff[index] at it
		staff[index] = new Employee;
		staff[index] -> setName(tName);

		cout << "Enter hours worked\n";
		getline(cin, stHours);
		tHours = stof(stHours);
		cout << "Enter pay rate\n";
		getline(cin, stRate);
		tRate = stof(stRate);

		//set the pay rate and hours the employee has worked
		staff[index] -> setHours(tHours);
		staff[index] -> setRate(tRate);

		//calculate regular pay, overtime pay and total pay for the employee
		staff[index] -> calculatePay();
		totalPay += staff[index] -> getTotalPay();

		//display all information about the employee
		cout << setprecision(2) << fixed << "Hours = " << staff[index] -> getHours() << ", rate = " << staff[index] -> getRate() << endl;
		cout << "Regular pay = " << staff[index] -> getRegularPay() << ", overtime pay = " << staff[index] -> getOverTimePay() << ", total pay = " << staff[index] -> getTotalPay() << endl;
		cout << setw(20) << setfill('-') << "" << endl;


		index++;


	}

	cout << setw(20) << setfill('-') << "" << endl;


	//display a summary of all the information that was collected
	cout << "We processed " << index << " employees:" << endl;

	for (int i = 0; i < index; i++) {

		cout << staff[i] -> getName() << endl;

	}
	cout << "total payroll - $ " << totalPay << endl;
	cout << "Program ending" << endl;

	return 0;
}



