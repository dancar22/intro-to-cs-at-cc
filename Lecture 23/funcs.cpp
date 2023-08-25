#include "funcs.hpp"


using namespace std;

void printInfo(const Book& thisBook) {

	cout << "Title: " << thisBook.title << endl;
	printInfo(thisBook.author);
	cout << "Genre: " << thisBook.genre << endl;
	cout << "Price: $" << thisBook.price << endl;

}

void printInfo(const Person& thisPerson) {

	cout << "Name: " << thisPerson.name << endl;
	cout << "Age: " << thisPerson.age << endl;

}

void discount(Book& thisBook) {

	cout << "The book is currently on sale!\n";
	thisBook.price *= 0.5;

}

Book userBook() {

	Book thisBook;
	cout << "Enter the title: ";
	getline(cin, thisBook.title);
	thisBook.author = userPerson();
	cin.ignore();
	cout << "Enter the genre: ";
	getline(cin, thisBook.genre);
	cout << "Enter the price: $";
	cin >> thisBook.price;
	return thisBook;

}

Person userPerson() {

	Person thisPerson;
	cout << "Enter the person's name: ";
	getline(cin, thisPerson.name);
	cout << "Enter the person's age: ";
	cin >> thisPerson.age;
	return thisPerson;

}

string convert(Color theColor) {

	switch (theColor) {

		case 0:
			return "red";
		case 1:
			return "orange";
		case 2:
			return "yellow";
		case 3:
			return "green";
		case 4:
			return "blue";
		case 5:
			return "purple";
		case 6:
			return "black";
		case 7:
			return "white";
		case 8:
			return "brown";
		default:
			return "N/A";
	}
}

Color createColor(string theColor) {

	if (theColor == "red") {
		return RED;
	}
	if (theColor == "orange") {
		return ORANGE;
	}
	if (theColor == "yellow") {
		return YELLOW;
	}
	if (theColor == "green") {
		return GREEN;
	}
	if (theColor == "blue") {
		return BLUE;
	}
	if (theColor == "purple") {
		return PURPLE;
	}
	if (theColor == "black") {
		return BLACK;
	}
	if (theColor == "white") {
		return WHITE;
	}
	if (theColor == "brown") {
		return BROWN;
	}
	else {
		return RED;
	}
}





