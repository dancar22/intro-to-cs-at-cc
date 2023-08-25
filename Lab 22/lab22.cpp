#include <iostream>
#include <string>

using namespace std;

struct NameTag {

	string engraving;
	string phoneNumber;
	string shape;
	string color;

};

struct Dog {

	string name;
	int age;
	string breed;
	NameTag nameTag;

};

void printInfo(const NameTag&);
void printInfo(const Dog&);
NameTag userTag();
Dog userDog();

int main() {

	Dog newDog;
	newDog = userDog();
	cout << endl;
	printInfo(newDog);

	return 0;

}

void printInfo(const NameTag& thisTag) {

	cout << "Engraving: " << thisTag.engraving << endl;
	cout << "Phone number: " << thisTag.phoneNumber << endl;
	cout << "Name Tag Shape: " << thisTag.shape << endl;
	cout << "Name Tag Color: " << thisTag.color << endl;

}

void printInfo(const Dog& thisDog) {

	cout << "Name: " << thisDog.name << endl;
	cout << "Age: " << thisDog.age << endl;
	cout << "Breed: " << thisDog.breed << endl;
	printInfo(thisDog.nameTag);

}

NameTag userTag() {

	NameTag thisTag;
	cout << "Enter the engraving: ";
	getline(cin, thisTag.engraving);
	cout << "Enter the phone number: ";
	getline(cin, thisTag.phoneNumber);
	cout << "Enter the shape of the dog tag: ";
	getline(cin, thisTag.shape);
	cout << "Enter the color of the dog tag: ";
	getline(cin, thisTag.color);

	return thisTag;

}

Dog userDog() {

	Dog thisDog;
	cout << "Enter the dog's name: ";
	getline(cin, thisDog.name);
	cout << "Enter the dog's age: ";
	cin >> thisDog.age;
	cin.ignore();
	cout << "Enter the dog's breed: ";
	getline(cin, thisDog.breed);
	thisDog.nameTag = userTag();

	return thisDog;

}




