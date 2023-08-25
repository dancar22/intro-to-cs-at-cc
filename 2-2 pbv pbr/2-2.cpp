/*
 * 2-2.cpp
 *
 *  Created on: Feb 2, 2022
 *      Author: dancar
 */
#include <iostream>

using namespace std;

void theFunc(int b[]) {

	cout << "in theFunc address of b " << b << endl << endl;

}

void theFunc2(int a, int aa[], int * aaa, int * aaaa, int * pa[]) {

	a += 3;

	aa[0] += 3;

	*aaa += 3;

	*aaaa += 3;

	cout << "In function " << *pa[37] << endl;

}

int main() {

	// case 1 - static int

	int a1 = 5;

	// case 2 - static array of ints

	int aa[100];
	aa[0] = 5;

	// case 3 - dynamic int

	int * aaa = new int;
	*aaa = 5;

	// case 4 - dynamic array of ints

	int * aaaa = new int[100];
	aaa[0] = 5;

	// case 5

	int s = 100;
	int * pa[s];
	for (int i = 0; i < s; i++) {

		pa[i] = new int;

	}


	*pa[37] = 99;
	*pa[38] = 1;


	cout << *pa[37] << endl;


	//sum up all the ints

	int sum = 0;

	for (int i = 0; i < s; i++) {

		sum += *pa[i];

	}

	cout << sum << endl;


	int a[100];

	cout << "address of a " << a << endl;
	theFunc(a);

	int * p;
	p = new int;
	*p = 55;

	cout << "my new int is at " << p << endl;
	cout << "my pointer p is at " << &p << endl;
	cout << "value of p: " << *p << endl;

	// call function passing all 4 types

	theFunc2(a1, aa, aaa, aaaa, pa);


	return 0;
}



