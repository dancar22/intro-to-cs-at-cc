#include <iostream>

using namespace std;

int main() {

	int array[5] = {1};
	int * ip[5] = {nullptr};
	for (int i = 0; i < 5; i++) {
		cout << ip[i] << endl;
		cout << array[i] << endl;

	}


	return 0;
}
