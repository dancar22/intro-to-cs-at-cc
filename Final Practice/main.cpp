#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct Arrow {


	string dir;
	int len;

};

void parse(vector<Arrow>&, fstream&);
void drawBag(vector<Arrow>&);
void drawUp(Arrow);
void drawRight(Arrow);
void drawDown(Arrow);
void drawLeft(Arrow);



int main() {

	vector<Arrow> bag;

	fstream arrowFile;
	arrowFile.open("arrow1.txt", ios::in);

	parse(bag, arrowFile);

	arrowFile.close();

	drawBag(bag);

	return 0;
}

void parse(vector<Arrow>& bag, fstream& arrowFile) {

	Arrow temp;

	while (!arrowFile.eof()) {

		arrowFile >> temp.dir;
		arrowFile >> temp.len;
		bag.push_back(temp);

	}


}

void drawBag (vector<Arrow>& bag) {

	for(Arrow& temp: bag) {

		if (temp.dir == "up") {
			drawUp(temp);
		}
		if (temp.dir == "right") {
			drawRight(temp);
		}
		if (temp.dir == "down") {
			drawDown(temp);
		}
		if (temp.dir == "left") {
			drawLeft(temp);
		}

	}


}

void drawUp(Arrow a) {

	cout << '^' << endl;
	for (int i = 0; i < a.len; i++) {
		cout << '|' << endl;
	}

}

void drawRight(Arrow a) {

	for (int i = 0; i < a.len; i++) {
		cout << '-';
	}

	cout << '>' << endl;

}

void drawDown(Arrow a) {

	for (int i = 0; i < a.len; i++) {
		cout << '|' << endl;
	}

	cout << 'v' << endl;

}

void drawLeft(Arrow a) {

	cout << '<';

	for (int i = 0; i < a.len; i++) {
		cout << '-';
	}

	cout << endl;

}




