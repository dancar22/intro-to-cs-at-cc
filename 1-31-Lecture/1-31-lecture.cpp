/*
 * 1-31-lecture.cpp
 *
 *  Created on: Jan 31, 2022
 *      Author: dancar
 */

#include <iostream>

using namespace std;


void eval(int *& ip1, int *& ip2, int *& ip3);


int main() {

	int b[100];
	//sum the "usual" way

	int sum = 0;
	for (int i = 0; i < 100; i++) {

		sum += b[i];

	}

	cout << "Sum the regular way: " << sum << endl;



	sum = 0;
	int * ip = b;



	for (int i = 0; i < 100; i++) {

		sum += *ip;
		ip++;

	}

	cout << "Sum the pointer way: " << sum << endl;

	int t = 3;
	int * p = nullptr;

	p = &t;

	cout << *p << endl;

	p += 7;

	cout << *p << endl;

	int * ip1;
	int * ip2;
	int * ip3;

	* ip1 = 5;
	* ip2 = 15;

	eval(ip1, ip2, ip3);


	cout << *ip3;




	return 0;
}

void eval(int *& ip1, int *& ip2, int *& ip3) {

	if (*ip1 > *ip2) {

		ip3 = ip1;

	} else {

		ip3 = ip2;

	}


}


