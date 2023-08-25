#include <iostream>
#include <string>

using namespace std;

struct NameTag {

	string engraving;
	string phoneNumber;
	string shape;
	string color;

};

enum Breed {
	LABRADOR,
	GERMANSHEPHERD,
	GOLDENRETRIEVER,
	BULLDOG,
	BOXER,
	POODLE,
	BEAGLE,
	ROTTWEILER,
	CHIHUAHUA,
	HUSKY
};

struct Dog {

	string name;
	int age;
	Breed breed;
	NameTag nameTag;

};
