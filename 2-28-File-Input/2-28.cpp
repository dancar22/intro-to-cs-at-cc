#include <iostream>
#include <fstream>

using namespace std;

int main() {


	char a[10];

	a[0] = 'h';
	a[1] = 'e';
	a[2] = 'l';
	a[3] = 'l';
	a[4] = 'o';
	a[5] = '\0';

	cout << "--->" << a << "<---" << endl;




	char * p;
	p = new char[10];
	p[0] = 'h';
	p[1] = 'e';
	p[2] = 'l';
	p[3] = 'l';
	p[4] = 'o';
	p[5] = '\0';

	char aa[10] = {'h', 'e', 'l', 'l', 'o', NULL};

	cout << aa << endl;

	cout << "--->" << p << "<---" << endl;

	ifstream inFile;
	inFile.open("nfile.txt", ios::in);

	if (!inFile.is_open()) {

		cout << "open failure" << endl;
		exit (1);

	}

	string input;
	getline (inFile, input);
	cout << "->" << input << "<--" << endl;

	string name;
	name = input.substr(0, 25);

	float pay = stof(input.substr(25, 6));

	float taxRate = stof(input.substr(30, 3));
	cout << pay << " " << taxRate << endl;



	inFile.close();

	ifstream iinFile;
	iinFile.open("nfile.txt");

	if (!iinFile.is_open()) {
		cout << "open failure";
		exit (1);
	}

	char iinput[34];
	iinFile.read(iinput, 34);
	char nname[26];
	char ppay[7];
	char ttaxRate[4];

	for (int i = 0; i < 25; i ++) {

		nname[i] = iinput[i];

	}

	nname[25] == NULL;

	int i, j;

	for (i = 25, j = 0; i < 31; i++, j++) {

		ppay[j] = iinput[i];

	}

	ppay[6] = '\0';

	for (i = 31, j = 0; i < 34; i++, j++) {

		ttaxRate[j] = iinput[i];

	}

	ttaxRate[3] = NULL;

	cout << "--->" << ttaxRate << "<---" << endl;

	float payS;

	payS = atof(ppay);

	cout << payS << endl;
	cout << ++payS << endl;









	return 0;
}
