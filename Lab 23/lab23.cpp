#include "funcs.hpp"

int main() {

	cout << "What is your favorite Breed of dogs?" << endl;
	Breed tempBreed;
	tempBreed = userBreed();
	cout << "For your favorite breed you selected: " << convert(tempBreed) << endl;

	Dog newDog;
	newDog = userDog();
	cout << endl;
	printInfo(newDog);


	return 0;

}












