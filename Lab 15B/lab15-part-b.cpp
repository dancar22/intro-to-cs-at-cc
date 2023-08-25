#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constant variables
    const char FILL = '-';
    const int WIDTH = 50;
    
    // seed the RNG
    srand(time(0));

    // TODO: create the array of size 7 for the magic 8-ball responses
    const int SIZE_A = 7;
    string responses[SIZE_A];

    // TODO: let the user enter their own fortunes
    //       using a range-based `for` loop
    for(string& element: responses) {

    	cout << "Enter your own fortune: " << endl;
    	getline(cin, element);

    }

    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    //       you should be able to just copy-and-paste your loop from part A
    string moreQuestions;

    do {

       	cout << setfill(FILL) << setw(WIDTH) << "" << endl;
       	string question;
       	cout << "Enter a question below, so that I might answer it:" << endl;
       	getline(cin, question);
       	cout << "\n" << responses[rand() % (SIZE_A)] << endl;
       	cout << "\nEnter yes to continue: ";
       	getline(cin, moreQuestions);

    } while (moreQuestions == "yes");

    // final message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "           THE MAGIC 8-BALL NOW DEPARTS!\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
