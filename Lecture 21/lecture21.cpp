#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person {

	string name;
	unsigned age;


};

struct Book {

	string title;
	Person author;
	string genre;
	double price;

};


int main() {

//	const int SIZE = 3;
//	Book myLib[SIZE];
//
//	for (int i = 0; i < SIZE; i++) {
//
//		cout << "Enter the title: ";
//		getline(cin, myLib[i].title);
//
//		cout << "Enter the author: ";
//		getline(cin, myLib[i].author);
//
//		cout << "Enter the genre: ";
//		getline(cin, myLib[i].genre);
//
//		cout << "Enter the price: ";
//		cin >> myLib[i].price;
//		cin.ignore();
//
//
//
//	}
//	cout << endl;
//
//	//create my library using an array
////	const int SIZE = 3;
////	Book myLib[SIZE];
////
////	//initialize my books in the library
////	myLib[0] = {
////			"House of Leaves", "Mark Z. Danielewski", "Fiction (Existential Horror)", 24.99
////	};
////
////	myLib[1] = {
////			"Dune", "Frank Herbert", "Science fiction", 12.01
////	};
////
////	myLib[2] = {
////			"Ashfall", "Mike Mullen", "Science fiction", 17.95
////	};
////
////	//print out the library information
////
//
//
//	 for (int i = 0; i < SIZE; i++) {
//
//		cout << "Title: " << myLib[i].title << endl;
//		cout << "Author: " << myLib[i].author << endl;
//		cout << "Genre: " << myLib[i].genre << endl;
//		cout << "Price: $" << myLib[i].price << endl;
//		cout << "\n";
//
//	}
//
//
//
//	vector<Book> betterLibrary(3);
//
//	for (Book &element: betterLibrary) {
//
//
//		cout << "Enter the title: ";
//		getline(cin, element.title);
//
//		cout << "Enter the author: ";
//		getline(cin, element.author);
//
//		cout << "Enter the genre: ";
//		getline(cin, element.genre);
//
//		cout << "Enter the price: ";
//		cin >> element.price;
//		cin.ignore();
//
//
//	}
//
//
//
//	for (unsigned i = 0; i < betterLibrary.size(); i++) {
//
//		cout << "Book #" << i + 1 << endl;
//		cout << "\tTitle: " << betterLibrary.at(i).title << endl;
//		cout << "\tAuthor: " << betterLibrary.at(i).author << endl;
//		cout << "\tGenre: " << betterLibrary.at(i).genre << endl;
//		cout << "\tPrice: $" << betterLibrary.at(i).price << endl;
//		cout << endl;
//
//	}

//	Book myBook;
//	myBook.title = "Some Book";
//	myBook.author.name = "Some Guy";
//	myBook.author.age = 69;
//	myBook.genre = "Picture Book";
//	myBook.price = 5.87;

	//create a book using the initialization list

	Book myBook = {
			"Some Book", {"Some Guy", 26}, "Some Genre", 27
	};



	cout << "Title: " << myBook.title << endl;
	cout << "Author: " << myBook.author.name << ", " << myBook.author.age << endl;
	cout << "Genre: " << myBook.genre << endl;
	cout << "Price: $" << myBook.price << endl;






	return 0;
}
