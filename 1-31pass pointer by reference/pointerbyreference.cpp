/*
 * pointerbyreference.cpp
 *
 *  Created on: Jan 31, 2022
 *      Author: dancar
 */

#include <iostream>

using namespace std;

void biggie (int * & pointer1, int * & pointer2, int * & pointer3);
// entry conditions (preconditions):
// on entry to biggie, p1 and p2 point to ints, p3 points to an int pointer
// which upon exit will contain the  larger int
// exit conditions (postconditions):
// p3 will point to the larger integer


int main() {

	int x;
	int y;
	x = 28;
	y = 4;
	int * p1;
	int * p2;
	int * p3 = nullptr;
	p1 = &x;
	p2 = &y;


	biggie(p1, p2, p3);

	cout << "The bigger number: " << *p3 << endl;

	return 0;
}


void biggie (int * & pointer1, int * & pointer2, int * & pointer3) {

	if (*pointer1 > *pointer2) {
		pointer3 = pointer1;
	} else {
		pointer3 = pointer2;
	}


}
