#include <iostream>

using namespace std;

double findMin(double numbers[], const int ARRAY_SIZE);

int main() {

	const int SIZE_A = 10;
	double numbers[SIZE_A];

	for (double& element: numbers) {

		cout << "Enter a number:";
		cin >> element;

	}

	cout << "The minimum number: " << findMin(numbers, SIZE_A);


	return 0;
}

double findMin(double numbers[], const int ARRAY_SIZE) {

	double min = numbers[0];

	for (int i = 0; i < ARRAY_SIZE; i++) {

		if (min > numbers[i]) {

			min = numbers[i];

		}

	}

	return min;
}
