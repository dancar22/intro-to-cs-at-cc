#include <iostream>

using namespace std;

int theFunc(int *  f);



int main() {

	int ba[100];
	int c;
	c = theFunc(ba);

	cout << "ba[0]=" << ba[0] << ", ba[1]=" << ba[1] << endl;



	int a;
	int b[100];
	int * p1;
	int * p2;
	p1 = &a;
	p2 = b;

	*p1 = 5;
	*(p2 + 1) = 2444;

	cout << b[1] << endl;

	int ia[3] = {1, 3, 4};

	cout << *(ia + 2) << endl;
	*(ia + 1) = 5;
	cout << ia[1] << endl;

	int i;
	int * ip;
	i = 5;
	cout << "i=" << i << endl;

	ip = &i;

	cout << "ip=" << ip << endl;

	cout << "*ip=" << *ip << endl;
	cout << "&ip=" << &ip << endl;

	int * ip2 = nullptr;
	int y = 600;
	cout << "I'm about to try to dereference ip2 = " << ip2 << endl;
	*ip = y;
	cout << "ok I'm done" << endl;




	return 0;
}

int theFunc(int *  f) {

	f[0] = 10;
	f++;
	*f = 20;


	return 0;


}
