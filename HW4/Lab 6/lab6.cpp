#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	double hoursToday, hoursMonth, totalHours, totalPay, hourPay;

	cout << "How many hours did you work today? ";
	cin >> hoursToday;
	cout << "How many hours did you work this month? ";
	cin >> hoursMonth;
	totalHours = hoursToday + hoursMonth;
	cout << "How much do you get paid per hour? ";
	cin >> hourPay;
	totalPay = hourPay * totalHours;
	cout << fixed << setprecision(2);
	cout << "Your total pay is $" << totalPay << endl;



	return 0;
}
