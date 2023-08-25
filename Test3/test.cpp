#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	cout << "Enter a string: ";
	const int BIG_SIZE = 1000;
	char safe[BIG_SIZE];
	cin >> safe;

	cout << safe;


	return 0;
}
