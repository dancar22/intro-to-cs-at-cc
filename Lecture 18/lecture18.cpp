#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printVec(vector<int>&);
vector<short> createVec();

int main() {

	//creating an integer vector of size 5
	vector<int> myVec(5);

	//initialize the vector elements
	myVec[0] = 12;
	myVec[1] = 19;
	myVec.at(2) = 4;
	myVec.at(3) = 7;
	myVec.at(4) = -1;

	//print some of the values
	cout << myVec.at(4) << endl;
	cout << myVec[1] << endl;

	//create a double vector with no starting size
	vector<double> veeTwo;
	veeTwo.push_back(1.5);
	cout << veeTwo.at(veeTwo.size() - 1) << endl;
	veeTwo.push_back(2.9);
	cout << veeTwo.at(veeTwo.size() - 1) << endl;

	//create a string vector with starting values
	vector<string> favoriteColors {
		"Green", "Purple", "Fucshia", "Cyan", "Chartruse"
	};

	cout << "My old favorite color: " << favoriteColors.back() << endl;
	favoriteColors.pop_back();
	cout << "The new last color: " << favoriteColors.back() << endl;

	//create a short vector of starting size 4
	vector<int> userVec(4);

	for (unsigned i = 0; i < userVec.size(); i++) {
		cout << "Enter a number: ";
		cin >> userVec.at(i);
	}

	printVec(userVec);

	//create a bool vector with starting values
	vector<bool> bv {false, true, true, false};
	cout << "Starting size: " << bv.size() << endl;
	bv.clear();
	cout << "Ending size: " << bv.size() << endl;
	if (bv.empty()) {
		cout << "yes its empty\n";
	} else {

	}

	return 0;
}

void printVec(vector<int>& vec) {

	for (unsigned i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << '\t';
	}
	cout << endl;
}

vector<short> createVec() {

	vector<short> localVec(4);

	for (unsigned i = 0; i < localVec.size(); i++) {
		cout << "Enter a number: ";
		cin >> localVec.at(i);
	}

	return localVec;

}
