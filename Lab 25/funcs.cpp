#include "funcs.hpp"
#include <iomanip>
#include <iostream>
#include <string>

/*******************************************************************************
 *  Description:
 *      Reads in the data from an input file chosen by the user. Displays that
 *      data onto the screen.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      N/A
*******************************************************************************/

void loadFile() {
    // variables
    fstream inputFile;
    string filename, line;

    // prompt and store the filename
    cout << "Enter the filename with extension that you want to load:\n";
    cin.ignore();
    getline(cin, filename);

    // TODO: try opening the file
    inputFile.open(filename, ios::in);

    if (inputFile.fail()) {
    	cout << "Error, unable to open that file!\n\n";
    	return;
    }

    // TODO: display the data in the file
    cout << endl;
    while(!inputFile.eof()) {

    	getline(inputFile, line);
    	cout << line << endl;

    }

    // TODO: close the file
    inputFile.close();
}

/*******************************************************************************
 *  Description:
 *      Writes data to an output file chosen by the user. Asks the user which
 *      mode to use (output or append). Calls the `survey` function to gather
 *      the data.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      N/A
*******************************************************************************/

void saveFile() {
    // variables
    fstream outputFile;
    string filename;
    int mode = -1;

    // prompt and store the filename
    cout << "Enter the filename with extension that you want to load:\n";
    cin.ignore();
    getline(cin, filename);

    // prompt and store for output or append mode
    while (mode != 0 && mode != 1) {
        cout << "Enter 0 for output (overwrite) mode or 1 for append mode:\n";
        cin >> mode;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(4096, '\n');
            mode = -1;
        }
    }

    // TODO: try opening the file in the desired mode

    if (mode) {
    	outputFile.open(filename, ios::app);
    } else {
    	outputFile.open(filename, ios::out);
    }

    if (outputFile.fail()) {
    	cout << "Error, unable to open that file!\n\n";
    	return;

    }

    // TODO: start the survey

    cin.ignore();
    survey(outputFile);

    // TODO: close the file

    outputFile.close();
}

/*******************************************************************************
 *  Description:
 *      Asks the current user a total of 5 survey questions. Saves the responses
 *      to `outputFile`. Loops the survey so multiple users can take the survey
 *      in one sitting.
 *
 *  Input(s):
 *      outputFile - a reference to a file stream object
 *                  (assumed to be opened and valid)
 *
 *  Output:
 *      N/A
*******************************************************************************/

void survey(fstream& outputFile) {
    // TODO: use your survey code from lab 24, making necessary adjustments

	cout << "\nWelcome to my survey!\n";
	cout << "I will be asking you a series of 5 questions.\n";
	cout << "Your responses will be saved for future reference.\n";

	cout << setw(50) << setfill('+') << "\n";
	int userNum = 1;

	string more = "yes";

	string hobby, job, favColor, name;
	int height = 0;

	do {
		if (userNum > 1) {
			cout << setw(50) << setfill('+') << "\n";
		}

		cout << "What is your name?" << endl;
		getline(cin, name);
		outputFile << "Name: " << name << endl;

		cout << "What is your height in inches (to the closest whole inch)?\n";
		cin >> height;
		outputFile << "Height: " << height << " inches\n";

		cout << "What is your favorite color?\n";
		cin.ignore();
		getline(cin, favColor);
		outputFile << "Favorite color: " << favColor << endl;

		cout << "What is your job?\n";
		getline(cin, job);
		outputFile << "Job: " << job << endl;

		cout << "What is your hobby?\n";
		getline(cin, hobby);
		outputFile << "Hobby: " << hobby << endl;

		cout << "Thank you for taking my survey!\n";

		cout << "Would you like to take the survey again?\n";
		getline(cin, more);
		userNum++;

	} while (more == "yes" || more == "Yes" || more == "y" || more == "Y" || more == "YES");

	cout << endl;

}
