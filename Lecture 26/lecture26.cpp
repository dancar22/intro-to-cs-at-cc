#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Triangle {
	double sideA;
	double sideB;
	double sideC;
	static const int NAME_SIZE = 50;
	char name[NAME_SIZE];
};

int main() {

	fstream writer;

	writer.open("my-data.dat", ios::out | ios::binary);

	string userMsg;
	float userFlt;
	const int SIZE = 5;
	unsigned numArr[SIZE] = {841, 16, 23, 90078, 1};

	cout << "Enter a message: ";
	getline(cin, userMsg);
	cout << "Enter a number: ";
	cin >> userFlt;
	Triangle myTri = {
			3.4, 2.89, 6.87, "Bermuda"
	};

	writer.write(userMsg.c_str(), userMsg.size() + 1);
	writer.write(reinterpret_cast<char*>(&userFlt), sizeof(userFlt));
	writer.write(reinterpret_cast<char*>(numArr), sizeof(numArr));
	writer.write(reinterpret_cast<char*>(&myTri), sizeof(myTri));

	writer.close();

	fstream reader;
	reader.open("my-data.dat", ios::in | ios::binary);
	const int SIZE_A = userMsg.size() + 1;
	char temp[SIZE_A];
	reader.read(temp, SIZE_A);
	string loadMsg;
	Triangle loadTri;
	loadMsg.insert(0, temp);
	float loadNum;
	unsigned loadArr[SIZE];
	reader.read(reinterpret_cast<char*>(&loadNum), sizeof(loadNum));
	reader.read(reinterpret_cast<char*>(loadArr), sizeof(loadArr));
	reader.read(reinterpret_cast<char*>(&loadTri), sizeof(loadTri));



	cout << loadMsg << endl;
	cout << loadNum << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << loadArr[i] << '\t';
	}
	cout << endl;

	cout << loadTri.sideA << ' ';
	cout << loadTri.sideB << ' ';
	cout << loadTri.sideC << '\n' << loadTri.name << endl;

	reader.close();

	return 0;
}
