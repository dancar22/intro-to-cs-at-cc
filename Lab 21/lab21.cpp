#include <iostream>

using namespace std;

struct Item {

	string name;
	int rating;
	string comment;

};

int main() {

	const int SIZE = 5;
	Item itemArr[SIZE];

	for (int i = 0; i < SIZE; i++) {

		cout << "Item " << i + 1 << " of 5" << endl;
		cout << "Enter the name: ";
		getline(cin, itemArr[i].name);
		cout << "Enter the rating: ";
		cin >> itemArr[i].rating;
		cin.ignore();
		cout << "Enter an optional comment: ";
		getline(cin, itemArr[i].comment);
		cout << endl;

	}

	for (Item element: itemArr) {

		cout << "Name: " << element.name << endl;
		cout << "Rating: " << element.rating << endl;
		cout << "Comment: " << element.comment << endl;
		cout << endl;

	}

	return 0;
}
