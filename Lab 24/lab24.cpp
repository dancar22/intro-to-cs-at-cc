#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

	cout << "Welcome to my survey!\n";
	cout << "I will be asking you a series of 5 questions.\n";
	cout << "Your responses will be saved for future reference.\n";

	cout << setw(50) << setfill('+') << "\n";
	int userNum = 1;

	string more = "yes";

	fstream userSurvey;
	userSurvey.open("userInfo.txt", ios::out);

	string hobby, job, favColor, name;
	int height = 0;

	do {

		cout << "Now starting survey for user #" << userNum << endl;

		cout << "What is your name?" << endl;
		getline(cin, name);
		userSurvey << "Name: " << name << endl;

		cout << "What is your height in inches (to the closest whole inch)?\n";
		cin >> height;
		userSurvey << "Height: " << height << " inches\n";

		cout << "What is your favorite color?\n";
		cin.ignore();
		getline(cin, favColor);
		userSurvey << "Favorite color: " << favColor << endl;

		cout << "What is your job?\n";
		getline(cin, job);
		userSurvey << "Job: " << job << endl;

		cout << "What is your hobby?\n";
		getline(cin, hobby);
		userSurvey << "Hobby: " << hobby << endl;

		userNum++;

		cout << "Would someone else like to take this survey?\n";
		getline(cin, more);

	} while (more == "yes" || more == "Yes" || more == "y" || more == "Y" || more == "YES");

	cout << setw(50) << setfill('+') << "\n";
	cout << "Good bye!" << endl;

	userSurvey.close();


	return 0;
}



