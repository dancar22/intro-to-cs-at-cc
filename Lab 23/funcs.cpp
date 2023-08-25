#include "ADT.hpp"

void printInfo(const NameTag& thisTag) {

	cout << "Engraving: " << thisTag.engraving << endl;
	cout << "Phone number: " << thisTag.phoneNumber << endl;
	cout << "Name Tag Shape: " << thisTag.shape << endl;
	cout << "Name Tag Color: " << thisTag.color << endl;

}

string convert(Breed thisDog) {

	switch(thisDog) {
	case 0:
		return "Labrador";
	case 1:
		return "German Shepherd";
	case 2:
		return "Golden Retriever";
	case 3:
		return "Bulldog";
	case 4:
		return "Boxer";
	case 5:
		return "Poodle";
	case 6:
		return "Beagle";
	case 7:
		return "Rottweiler";
	case 8:
		return "Chihuahua";
	case 9:
		return "Husky";
	default:
		return "N/A";
	}

}

void printInfo(const Dog& thisDog) {

	cout << "Name: " << thisDog.name << endl;
	cout << "Age: " << thisDog.age << endl;
	cout << "Breed: " << convert(thisDog.breed) << endl;
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



Breed userBreed() {

	cout << "These are the available Breeds:\n";
	for (int i = 0; i < 10; i++) {
		cout << "\t" << convert(static_cast<Breed>(i)) << endl;
	}
	string tempBreed;
	cout << "Enter breed: ";
	getline(cin, tempBreed);

	if (tempBreed == "Labrador") {
		return LABRADOR;
	}
	if (tempBreed == "German Shepherd") {
		return GERMANSHEPHERD;
	}
	if (tempBreed == "Golden Retriever") {
		return GOLDENRETRIEVER;
	}
	if (tempBreed == "Bulldog") {
		return BULLDOG;
	}
	if (tempBreed == "Boxer") {
		return BOXER;
	}
	if (tempBreed == "Poodle") {
		return POODLE;
	}
	if (tempBreed == "Beagle") {
		return BEAGLE;
	}
	if (tempBreed == "Rottweiler") {
		return ROTTWEILER;
	}
	if (tempBreed == "Chihuahua") {
		return CHIHUAHUA;
	}
	if (tempBreed == "Husky") {
		return HUSKY;
	} else {
		return BULLDOG;
	}


}

Dog userDog() {

	Dog thisDog;
	cout << "Enter the dog's name: ";
	getline(cin, thisDog.name);
	cout << "Enter the dog's age: ";
	cin >> thisDog.age;
	cin.ignore();
    thisDog.breed = userBreed();
	thisDog.nameTag = userTag();

	return thisDog;

}







