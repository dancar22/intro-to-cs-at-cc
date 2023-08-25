#include <fstream>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

	//1) creating a file stream variable/object
	fstream myFile;

	//2) open the actual file
	cout << "Opening the file...";
	myFile.open("grades.txt", ios::out);
	cout << "opened!\n";

	//3) write/save data to the file
	cout << "Writing data to the file...";

	myFile << "Student A: %" << 84 << endl;
	myFile << "Student B: %" << 78 << endl;
	myFile << "Student C: %" << 64 << endl;
	myFile << "Student D: %" << 96;

	cout << "done!\n";

	//4) close the file
	cout << "Closing the file...";
	myFile.close();
	cout << "closed!\n";

	fstream secondFile;
	secondFile.open("output-data-files\\moreData.txt", ios::out);

	double x = 19.485;
	string s = "My name is Carlos!";
	unsigned u = 100;
	bool a = true;

	secondFile << "Hello, this is my second file!\n";
	secondFile << left << setw(25) << x << setw(25) << u << endl;
	secondFile << s << endl;
	secondFile << u << endl;
	secondFile << boolalpha << a << endl;

	const int SIZE = 5;
	int numbers[SIZE] = {9, -23, 0, 187, 3};

	for (int elem: numbers) {
		secondFile << elem << endl;
	}


	secondFile.close();

	fstream userFile;
	userFile.open("output-data-files\\userData.txt", ios::app);
	const int SIZE_B = 4;
	short userNums[SIZE_B];
	for (short& elem: userNums) {
		cout << "Enter a number: ";
		cin >> elem;
	}

	for (int i = 0; i < SIZE_B; i++) {
		userFile << left << setw(5) << userNums[i] << " ";
	}
	userFile << endl;

	userFile.close();

	return 0;
}
