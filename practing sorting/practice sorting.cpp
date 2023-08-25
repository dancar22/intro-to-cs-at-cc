/*
 * practice sorting.cpp
 *
 *  Created on: Feb 1, 2022
 *      Author: dancar
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;

void printArray(int size, int *& arr) {



	for (int i = 0; i < size; i+=5) {

		for(int j = 0; j < 5; j++) {

			cout << setw(3) << left << arr[j + i] << " ";

		}

		cout << endl;



	}

	cout << endl;

}

void sort(int size, int *& arr) {

	for (int i = 1; i < size; i++) {


		for (int j = i; (arr[j] < arr[j-1]) && j > 0; j--) {

			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;

		}


	}


}


int main() {

	srand(time(0));


	const int SIZE = 25;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {

		arr[i] = rand() % (51);

	}

	int * ap = arr;

	printArray(SIZE, ap);
	sort(SIZE, ap);
	printArray(SIZE, ap);



	return 0;
}


