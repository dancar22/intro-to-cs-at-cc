#include <iostream>
#include <iomanip>

using namespace std;

void getValidAnswer(string, string&);
string findGame(string[], const int);
string findOldGame(string[], const int);
string findNewGame(string[], const int);

const int SIZE_B = 10;
string recommendations[SIZE_B] = {"Donkey Kong Country", "Pac-Man", "Duck Hunt", "Fallout 2", "Diablo II", "FIFA 22", "Assetto Corsa", "Dota 2", "Lawn Mowing Simulator", "Red Dead Redemption 2"};

/*	Description:
 * 		Starting point of the program. Asks the users questions and then calls the findGame function using the answers. Prints out the suggested game to the user.
 * 	Input(s):
 * 		N/A
 * 	Output(s);
 * 		exit value of the program
 */
int main() {

	//Hey Mr. Moreno! I was using this section to make sure my function works correctly. you can uncomment it if you want to see what choices you need to make to get to any game
	/*for (int i = 1; i < 3; i++) {
		for (int j = 1; j < 3; j++) {
			for (int k = 1; k < 3; k++) {
				for (int s = 1; s < 3; s++) {
					for (int f = 1; f < 3; f++) {
							string test[5] = {to_string(i), to_string(j), to_string(k), to_string(s), to_string(f)};
							cout << i << " " << j << " " << k << " " << s << " " << f << ": " << findGame(test, 5) << endl;
						}
					}
				}
			}
	}*/

	const int SIZE_A = 5;
	string answers[SIZE_A];
	string questions[SIZE_A] = {"1.Do you like (1) old  or (2) new games?", "2.Do you like (1) simulator or (2) arcade games?",
			"3.Do you like (1) competitive  or (2) casual games?", "4.Do you like (1) console  or (2) pc games?",
			"5.Do you like (1) non-story-based games  or (2) story-based games?"};

	cout << "Welcome to the video game recommendation system!\n";
	cout << "You will be asked 5 questions.\n";
	cout << "Based on your answers I will recommend a game for you to play\n\n";
	cout << "For the following questions please only respond with 1 or 2\n\n";

	for (int i = 0; i < SIZE_A; i++) {

		getValidAnswer(questions[i], answers[i]);
		cout << endl;

	}

	string recommendation = findGame(answers, SIZE_A);

	cout << "Based on your responses, my best recommendation is:\n\n";
	cout << setfill('*') << setw(recommendation.length()) << "" << endl;
	cout << recommendation << endl;
	cout << setfill('*') << setw(recommendation.length()) << "" << endl;




	return 0;
}


/*	Description:
 * 		Asks the user a question and makes sure the input of the user is either 1 or 2
 * 	Input(s):
 * 		The question it will ask the user
 * 		A string reference variable to which the answer of the user will be stored
 * 	Output(s):
 * 		N/A
 */
void getValidAnswer(string question, string& answer) {

	do {

		cout << question << "\nEnter 1 for the first option and 2 for the second option: ";
		getline(cin, answer);

	} while (answer != "1" && answer != "2");

}

/*	Description:
 * 		Checks whether the user wants a new or an old game and calls the appropriate function to find a game
 * 	Input(s):
 * 		Array that represents the users answers to the questions
 * 		The size of the array
 * 	Output(s):
 * 		A string that represents the recommended game
 */
string findGame(string answers[], const int SIZE) {

	if (answers[0] == "1") {

		return findOldGame(answers, SIZE);

	} else {

		return findNewGame(answers, SIZE);

	}


}

/*	Description:
 * 		Uses logic to recommend a user an old game based on their other answers
 * 	Input(s):
 * 		Array that represents the users answers to the questions
 * 		The size of the array
 * 	Output(s):
 * 		A string that represents the recommended game
 */
string findOldGame(string answers[], const int SIZE) {

	string answer;

	if (answers[1] == "1") {

		if (answers[3] == "1") {
			answer = recommendations[2];
		} else {
			answer = recommendations[3];
		}

	} else {

		if (answers[3] == "2") {

			answer = recommendations[4];

		} else if (answers[4] == "1") {

			answer = recommendations[0];

		} else {
			answer = recommendations[1];
		}

	}

	return answer;

}

/*	Description:
 * 		Uses logic to recommend a user a new game based on their other answers
 * 	Input(s):
 * 		Array that represents the users answers to the questions
 * 		The size of the array
 * 	Output(s):
 * 		A string that represents the recommended game
 */
string findNewGame(string answers[], const int SIZE) {
	string answer;

	if (answers[4] == "2") {

		answer = recommendations[9];

	} else {

		if (answers[1] == "2") {

			answer = recommendations[5];

		} else {

			answer = recommendations[6];

		}

	}

	if (answers[1] == "2" && answers[2] == "1" && answers[3] == "2" && answers[4] == "1") {
		answer = recommendations[7];
	}

	if (answers[1] == "1" && answers[2] == "2" && answers[4] == "1") {

		answer = recommendations[8];

	}


	return answer;

}
