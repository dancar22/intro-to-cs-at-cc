#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//All documentation of the functions is below the main function
void dynAlloc (int, int * &);
void insertionSort (int *, int, int *);
void displayArray (int *, int);
int linearSearch (int *, int, int, int &);
int binarySearch (int *, int, int, int &);



int main() {

	//Declare the two pointers and dynamically allocate memory
	const int SIZE = 100;
	int * unsArr = nullptr;
	int * sortArr = nullptr;
	dynAlloc(SIZE, unsArr);
	dynAlloc(SIZE, sortArr);

	//Assign random values to each element of unsArr
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		unsArr[i] = rand() % 51;
	}

	//Print and sort the contents of the arrays
	cout << "Here is the unsorted array:\n\n";
	displayArray(unsArr, SIZE);
	insertionSort(unsArr, SIZE, sortArr);
	cout << "Here is the result from the sort:\n\n";
	displayArray(sortArr, SIZE);

	//Let the user search the sorted array until they enter -1
	while(1) {

		int searchNum;
		cout << "Enter an integer to search for: ";
		cin >> searchNum;

		if (searchNum == -1) {
			break;
		}

		int iter = 0;
		int spot = linearSearch(sortArr, SIZE, searchNum, iter);

		cout << "\nResults from linear search:\n";
		cout << "\tnumber of iterations: " << iter << endl;
		cout << "\telement number (-1 means it was not found): " << spot << endl;

		if (spot != -1) {
			cout << "\tsortArr[" << spot << "] = " << sortArr[spot] << endl;
		}

		cout << endl;

		iter = 0;
		spot = binarySearch(sortArr, SIZE, searchNum, iter);

		cout << "\nResults from binary search:\n";
		cout << "\tnumber of iterations: " << iter << endl;
		cout << "\telement number (-1 means it was not found): " << spot << endl;

		if (spot != -1) {
			cout << "\tsortArr[" << spot << "] = " << sortArr[spot] << endl;
		}

		cout << endl;


	}

	//Let go of the memory that was allocated for the arrays
	delete [] sortArr;
	delete [] unsArr;

	cout << "\nThank you for using my program!\nGoodbye!";



	return 0;
}


/*	Dynamically allocates memory and points a pointer to the beginning of the allocated memory chunk
 *
 * 	Preconditions:
 * 		numAll - is an integer representing the length of the array that needs to be allocated
 * 		ip - is a pointer that was declared and passed by the caller as a reference variable
 *
 * 	Postconditions:
 * 		ip - is pointing to the beginning of the allocated array of integers
 *
 */

void dynAlloc(int numAll, int * & ip) {

	ip = new int[numAll];

}

/* 	Uses insertion sort to sort integers from one array into another by ascending order
 *
 * 	Preconditions:
 * 		unsArr - is an int pointer that points to the beginning of the unsorted array
 * 		size - is an int that represents the size of the arrays
 * 		sortArr - is an int pointer that points to the beginning of the array that the sorted data will be stored into
 *
 * 	Postconditions:
 * 		sortArr - will store the contents of unsArr in ascending order
 *
 */
void insertionSort (int * unsArr, int size, int * sortArr) {

	for (int i = 0; i < size; i++) {

		sortArr[i] = unsArr[i];

	}



	for (int i = 1; i < size; i++) {

		for (int j = i; (j > 0) && sortArr[j] < sortArr[j - 1]; j--) {

			int temp = sortArr[j];
			sortArr[j] = sortArr[j - 1];
			sortArr[j - 1] = temp;

		}

	}


}

/*	Displays an array in rows of 5
 *
 * 	Preconditions:
 * 		arr - is an int pointer that points to the beginning of the array that will be displayed
 * 		size - represents the size of arr (needs to be a multiple of 5)
 *
 * Postconditions:
 * 		the contents of arr will be displayed in rows of 5
 *
 */
void displayArray (int * arr, int size) {

	for (int i = 0; i < size; i+=5) {

		for(int j = 0; j < 5; j++) {

			cout << setw(4) << left << arr[j + i];

		}

		cout << endl;



	}

	cout << endl;

}

/*	Uses basic linear search to find the location of a value in an array of integers
 *
 * 	Preconditions:
 * 		sArr - is an int pointer that points to the beginning of an int array that is sorted in ascending order
 * 		size - is an int that represents the size of sArr
 * 		goal - is an int that the caller is searching for in the array
 * 		iter - is an int that is passed by reference
 *
 * 	Postconditions:
 * 		iter - will represent the number of times a comparison between the goal and a value in the array was done
 * 		the function will return an int value that will represent the place of the goal in the array
 * 		if the goal was not found the function will return a -1
 *
 */

int linearSearch (int * sArr, int size, int goal, int & iter) {

	iter = 0;

	for (int i = 0; i < size; i++) {

		if (sArr[i] < goal) {

			iter++;

		} else if (sArr[i] > goal) {

			iter += 2;
			return -1;

		} else {

			iter += 2;
			return i;

		}

	}

	return -1;
}

/*	Uses binary search to find the location of a value in an array of integers
 *
 * 	Preconditions:
 * 		sArr - is an int pointer that points to the beginning of an int array that is sorted in ascending order
 * 		size - is an int that represents the size of sArr
 * 		goal - is an int that the caller is searching for in the array
 * 		iter - is an int that is passed by reference
 *
 * 	Postconditions:
 * 		iter - will represent the number of times a comparison between the goal and a value in the array was done
 * 		the function will return an int value that will represent the place of the goal in the array
 * 		if the goal was not found the function will return a -1
 *
 */
int binarySearch (int * sArr, int size, int goal, int & iter) {

	iter = 0;

	bool found = false;
	int low = 0;
	int high = size - 1;
	int middle = 0;

	while (low <= high && !found) {

		middle = (low + high) / 2;
		if (sArr[middle] < goal) {

			iter--;
			low = middle + 1;

		} else if (sArr[middle] > goal) {

			high = middle - 1;

		} else {

			found = true;

		}

		iter += 2;


	}

	if (!found) {

		return -1;

	} else {

		return middle;

	}

}
