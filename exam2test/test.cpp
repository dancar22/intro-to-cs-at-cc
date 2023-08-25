#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<char> letters;
	cout << "Enter a number: ";
	cin >> letters[0];
	cout << letters.size();
	for (int i = 0; i < letters.size(); i++) {
		cout << letters.at(i);
	}



	return 0;
}
