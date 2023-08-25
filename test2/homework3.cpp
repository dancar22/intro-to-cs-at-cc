#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // display the welcome message
    cout << "Welcome to my Word Game! This is the template:\n\n";

    // display the template
    cout << "This is the story of NOUN.\n";
    cout << "They are about NUMBER years old.\n";
    cout << "They like the color NOUN because \n";
    cout << "it reminds them of NOUN.\n";
    cout << "On weekends, they VERB because it makes them feel ADJECTIVE.\n";
    cout << "They work as a stock market investor.\n";
    cout << "Currently, they are focusing on a stock with price $NUMBER.\n";
    cout << "The stock name is NOUN and uses the marker SYMBOL.\n\n";

    // TODO: gather the input needed for the story
    string noun1, noun2, noun3, noun4, verb1, adjective1;
    int num1;
    double num2;
    char symbol1;

    cout << "Enter the first noun: ";
    getline(cin, noun1);
    cout << "Enter the first number (integer): ";
    cin >> num1;
    cin.ignore();
    cout << "Enter the second noun: ";
    getline(cin, noun2);
    cout << "Enter the third noun: ";
    getline(cin, noun3);
    cout << "Enter the verb: ";
    getline(cin, verb1);
    cout << "Enter the adjective: ";
    getline(cin, adjective1);
    cout << "Enter the second number (floating point): ";
    cin >> num2;
    cin.ignore();
    cout << "Enter the fourth noun: ";
    getline(cin, noun4);
    cout << "Enter the symbol (single character): ";
    cin >> symbol1;

    // TODO: display the story with the filled information

    cout << "\nThis is the story of " << noun1 << ".\n";
    cout << "They are about " << num1 << " years old.\n";
    cout << "They like the color " << noun2 << " because \n";
    cout << "it reminds them of " << noun3 << ".\n";
    cout << "On weekends, they " << verb1 << " because it makes them feel " << adjective1 << ".\n";
    cout << "They work as a stock market investor.\n";
    cout << fixed << setprecision(2);
    cout << "Currently, they are focusing on a stock with price $" << num2 << ".\n";
    cout << "The stock name is " << noun4 << " and uses the marker " << symbol1 << ".\n\n";




    // TODO: seed the random number generator using the current system time

    srand(time(0));

    // TODO: create the graph

    cout << setfill('~') << setw(round(num2)) << "" << endl;
    num2 *= 2 + rand() % (4 - 2 + 1);
    cout << setfill('~') << setw(round(num2)) << "" << endl;
    num2 /= 2 + rand() % (4 - 2 + 1);
    cout << setfill('~') << setw(round(num2)) << "" << endl;
    num2 += 2 + rand() % (4 - 2 + 1);
    cout << setfill('~') << setw(round(num2)) << "" << endl;
    num2 -= 2 + rand() % (4 - 2 + 1);
    cout << setfill('~') << setw(round(num2)) << "" << endl;
    num2 *= 2 + rand() % (4 - 2 + 1);
    cout << setfill('~') << setw(round(num2)) << "" << endl;

    cout << "In the end, the stock ended at $" << num2;

    // TODO: display the final stock price

    // terminate
    return 0;
}
