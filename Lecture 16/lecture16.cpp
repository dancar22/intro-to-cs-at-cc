#include <iostream>
#include <string>

using namespace std;

//function prototype
void initialize(float[], int);
bool equalityCheck(double[], double[], int);

int main() {

	//create a double array
	const int SIZE_A = 4;
	double arrOne[SIZE_A] = {1.1, 2.2, 3.3, 4.4};

	cout << "Sum of element 1 and element 3 is " << arrOne[1] + arrOne[3] << endl;

	if (arrOne[2] > 0.0) {

		cout << "The third element is positive!\n";

	} else {

		cout << "The third element is non-positive :(\n";

	}

	double arrTwo[SIZE_A];

	for (int i = 0; i < SIZE_A; i++) {

		arrTwo[i] = arrOne[i] + 1;

	}


	if(equalityCheck(arrOne, arrTwo, SIZE_A)) {

		cout << "Arrays are equal!\n";

	} else {

		cout << "Arrays are not equal\n";

	}

	const int SIZE_B = 10;
	double arrThree[SIZE_B] = {6.7, 24.6, 8.1, 0.5, 8.6, 2.1, 7.2, 10.5, 0.6, 0};

	double maxValue = arrThree[0];
	for (int i = 1; i < SIZE_B; i++) {

		if (arrThree[i] > maxValue) {
			maxValue = arrThree[i];
		}

	}

	cout << "The biggest value in the array is " << maxValue << endl;

	const int CLASS_SIZE = 8;
	int testScores[CLASS_SIZE] = {82, 79, 94, 64, 80, 88, 76, 97};
	string names[CLASS_SIZE] = {"Jane", "Henry", "Romelia", "Tristan", "Melany", "Zack", "Junior", "Darius"};
	float tuition[CLASS_SIZE];

//	for (int i = 0; i < CLASS_SIZE; i++) {
//
//		cout << "Dear " << names[i] << ", please enter your current tuition: $";
//		cin >> tuition[i];
//
//	}
//
//	for (int i = 0; i < CLASS_SIZE; i++) {
//
//		cout << "The student, " << names[i] << ", received a test score of " << testScores[i] <<
//				" and has a tuition of $" << tuition[i] << endl;
//
//	}

	//call the initialize function
	const int SIZE_C = 3;
	float arrFour[SIZE_C];
	initialize(arrFour, SIZE_C);

	for (float elem: arrFour) {

		cout << elem << "\t";

	}

	cout << endl;

	const int SIZE_D = 100;
	float arrFive[SIZE_D];
	initialize(arrFive, SIZE_D);


	//terminate
	return 0;

}

void initialize(float arr[], const int ARR_SIZE) {

	for (int i = 0; i < ARR_SIZE; i++) {

		cout << "Enter a floating point value: ";
		cin >> arr[i];

	}


}

bool equalityCheck(double arrOne[], double arrTwo[], const int ARR_SIZE) {

	bool equalArrays = true;
	for (int i = 0; i < ARR_SIZE; i++) {

		if (arrOne[i] != arrTwo[i]) {
			equalArrays = false;
		}

	}
	return equalArrays;

}
