#include <iostream>
#include <string>

using namespace std;

struct Person {
	string name;
	int age;
};

struct Book {
	string title;
	Person author;
	string genre;
	double price;
};

void printInfo(const Book&);
void printInfo(const Person&);
void discount(Book&);
Book userBook();
Person userPerson();

int main() {

	Book myBook = {
		"The Big Blue Book",
		{"The Blue Person", 35},
		"Mystery",
		18.48

	};

	printInfo(myBook);
	cout << endl;

	cout << "Old price: $" << myBook.price << endl;
	discount(myBook);
	cout << "New price: $" << myBook.price << endl;
	cout << endl;

	Person me = {
			"Turkey Man",
			696969
	};

	printInfo(me);
	cout << endl;

	Book newBook = userBook();
	cout << endl;
	printInfo(newBook);

	return 0;

}

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




