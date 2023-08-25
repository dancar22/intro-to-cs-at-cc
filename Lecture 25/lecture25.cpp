#include "funcs.hpp"

using namespace std;

int main() {

	dataTypeDemo();

	//1) create the file stream variable
	fstream firstFile;

	//2) opening the file in input mode
	firstFile.open("my-data.cs1", ios::in);

	//ensure file was opened successfully

	if (firstFile.fail()) {
		cout << "ERROR! The file was not opened successfully, now exiting\n";
		exit(EXIT_FAILURE);
	}

	//3) read the data
	readCS1Format(firstFile);

	//4) close the file
	firstFile.close();
	cout << endl;

	// create a second file stream
	fstream secondFile;
	string fileName;

	do {

		cout << "Enter the filename: ";
		getline(cin, fileName);
		secondFile.open(fileName, ios::in);

	} while (secondFile.fail());

	readLineByLine(secondFile);

	secondFile.close();

	return 0;

}
