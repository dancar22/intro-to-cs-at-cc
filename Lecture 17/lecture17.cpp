#include <iostream>
#include <iomanip>

using namespace std;


const int USER_COL = 3;
void userInitialize(double[][USER_COL], const int);

int main() {
	//normal (1D) array
	int tmpArr[3] = {5, 10, 15};



	//first 2D array example
	const int RSIZE = 4, CSIZE = 3;
	int myTable[RSIZE][CSIZE];

	for (int i = 0; i < RSIZE; i++) {

		for (int j = 0; j < CSIZE; j++) {

			myTable[i][j] = i + j;
			cout << myTable[i][j] << ' ';

		}

		cout << endl;

	}

	cout << endl;

	//2D array for my seating chart

	const int CLASS_ROW = 4, CLASS_COL = 4;
	string seatingChart[CLASS_ROW][CLASS_COL] =
	{
			{"Professor", "",        "",       ""},
			{"John",      "",        "Chloe",  "Eli"},
			{"",          "Sonya",   "Adam",   ""},
			{"Khat",      "Branden", "Hasina", ""}
	};

	for (int i = 0; i < CLASS_ROW; i++) {
		for (int j = 0; j < CLASS_COL; j++) {

			cout << left << setw(9) << seatingChart[i][j] << "| ";

		}

		cout << endl;

	}

	 const int USER_ROW = 2;
	 double userArr[USER_ROW][USER_COL];
	 userInitialize(userArr, USER_ROW);

	 for (int i = 0; i < USER_ROW; i++) {
	 	for (int j = 0; j < USER_COL; j++) {

	 		cout << userArr[i][j] << " ";

	 	}

	 	cout << endl;
	 }



	//terminate
	return 0;


}

void userInitialize(double twoDeeArr[][USER_COL], const int USER_ROW) {

	for (int i = 0; i < USER_ROW; i++) {
		for (int j = 0; j < USER_COL; j++) {

			cout << "Enter a double value: ";
			cin >> twoDeeArr[i][j];

		}
	}


}
