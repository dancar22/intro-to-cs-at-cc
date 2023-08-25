#include <iostream>
#include <cmath>

using namespace std;

int addemup (int & a, int & b) {



	return a + b;

}

int addemup (const int & a, const int & b) {

	// can not change a or b in this because they are const

	cout << &a << endl;

	return a + b;

}

int main() {

	// Lvalue - something that can be on the left side of an assignment
	// Rvalue - something that can only be on the right side of an assignment

	int i;
	//assignment statement, i is an L value, 3 is not an L value
	i = 3;

	//	3 = i does not work because 3 is not an L value

	i = rand(); //works
	// rand() = i; // does not work

	// returns from functions are Rvalues
	// Lvalue is something you can get the address of

	int j = 4;
	i = 3;

	//int sum = addemup(i, 6); does not work because 6 is an rvalue, if a function uses pass by reference it needs an lvalue
	int sum = addemup(i, j); //works because both i and j are lvalues
	cout << sum << endl;

	int sum1 = addemup(3, 4);

	cout << sum1 << endl;






	return 0;
}
