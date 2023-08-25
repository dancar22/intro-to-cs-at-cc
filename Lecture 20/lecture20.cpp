#include <iostream>
#include <string>

using namespace std;

// ADT definition for a dog
struct Dog {

	string furColor;
	int age;
	string breed;
	string name;
	bool sex; //true means female false means male

};

int main() {

	// create Dog variables
	Dog myDog;
	Dog yourDog;

	myDog.furColor = "green";
	myDog.age = 45;
	myDog.breed = "Husky";
	myDog.name = "Sushi";
	myDog.sex = true;

	// print out my dog's information
	cout << "My dog's fur color: " << myDog.furColor << endl;
	cout << "My dog's age: " << myDog.age << endl;
	cout << "My dog's breed: " << myDog.breed << endl;
	cout << "My dog's name: " << myDog.name << endl;
	cout << "My dog's sex: ";

	if (myDog.sex) {

		cout << "female\n";

	} else {

		cout << "male\n";

	}

	// let the user create their own dog
	cout << "Enter your dog's fur color: ";
	getline(cin, yourDog.furColor);
	cout << "Enter your dog's age: ";
	cin >> yourDog.age;
	cout << "Enter your dog's breed: ";
	cin.ignore();
	getline(cin, yourDog.breed);
	cout << "Enter your dog's name: ";
	getline(cin, yourDog.name);
	cout << "Enter your dog's sex (1 for female, 0 for male): ";
	cin >> yourDog.sex;

	cout << "Your dog's fur color: " << yourDog.furColor << endl;
	cout << "Your dog's age: " << yourDog.age << endl;
	cout << "Your dog's breed: " << yourDog.breed << endl;
	cout << "Your dog's name: " << yourDog.name << endl;
	cout << "Your dog's sex: ";

	if (yourDog.sex) {

		cout << "female\n";

	} else {

		cout << "male\n";

	}



	//create thirdDog
	Dog thirdDog = {
			"brown", 6, "Dobberman", "Pete", false
	};





	return 0;
}
