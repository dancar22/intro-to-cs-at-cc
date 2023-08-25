#include <string>
#include <iostream>

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

enum Color {
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	BLUE,
	PURPLE,
	BLACK,
	WHITE,
	BROWN
};

struct Dog {
	Color furColor;
	int age;
	string breed;
	string name;
	bool sex;
};
