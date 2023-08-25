#include <iostream>

using namespace std;

int theFunction(int a, int b) {

	cout << "theFunction is at " << (void*)&theFunction << endl;
	return a + b;

}

int main() {

	cout << "main is at " << (void*)&main << endl;

	int a = 567, b;
	float f;

	int * ip = nullptr; // define a pointer of type int
	float * fp = nullptr; // define a pointer of type float

	ip = &a;
	fp = &f;

	cout << &a << ", " << ip << endl;

	cout << "contents of a " << a << " address of a " << ip << endl;
	cout << "contents of f " << f << " address of f " << fp << endl;
	cout << 0xa4c3 << endl;

	(*ip)++;
	cout << "new content of a: " << a << endl;



	a = 1;
	b = 2;
	int result = theFunction(a, b);
	cout << result << endl;

	cout << "address of variable a: " <<  &a << endl;
	cout << "address of variable b: " <<  &b << endl;




	return 0;


}
