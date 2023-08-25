#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Arrow {

	string type;
	int len;

};

vector<Arrow> parse(fstream&);
void display(const vector<Arrow>&);
void displayRight(const Arrow&);
void displayLeft(const Arrow&);
void displayUp(const Arrow&);
void displayDown(const Arrow&);

int main() {

	fstream reader;
	reader.open("arrow1.txt", ios::in);
	vector<Arrow> arrowBag;
	arrowBag = parse(reader);
	reader.close();
	display(arrowBag);

	return 0;

}

vector<Arrow> parse(fstream& reader) {

	vector<Arrow> arrowBag;
	Arrow temp;

	while(!reader.eof()) {

		reader >> temp.type;
		reader >> temp.len;
		arrowBag.push_back(temp);

	}

	return arrowBag;

}

void display(const vector<Arrow>& arrowBag) {

	for (unsigned i = 0; i < arrowBag.size(); i++) {

		if (arrowBag.at(i).type == "right") {
			displayRight(arrowBag.at(i));
		} else if (arrowBag.at(i).type == "left") {
			displayLeft(arrowBag.at(i));
		} else if (arrowBag.at(i).type == "up") {
			displayUp(arrowBag.at(i));
		} else if (arrowBag.at(i).type == "down") {
			displayDown(arrowBag.at(i));
		} else {
			cout << "Invalid arrow!\n";
		}

	}
}

void displayRight(const Arrow& sharp) {

	for (int i = 0; i < sharp.len; i++) {
		cout << '-';
	}
	cout << ">\n";

}

void displayLeft(const Arrow& sharp) {

	cout << '<';
	for (int i = 0; i < sharp.len; i++) {
		cout << '-';
	}
	cout << endl;

}

void displayUp(const Arrow& sharp) {

	cout << '^' << endl;

	for (int i = 0; i < sharp.len; i++) {
		cout << '|' << endl;
	}

}

void displayDown(const Arrow& sharp) {

	for (int i = 0; i < sharp.len; i++) {
		cout << '|' << endl;
	}

	cout << 'v' << endl;

}
