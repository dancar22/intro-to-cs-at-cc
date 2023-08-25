#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

const float TAX = 3.4; // global constant

void theFunc (const float & num) {


	cout << num << endl;

}

int main() {

	const int * const xx = new int;


	// TAX = 4; does not work

	theFunc(TAX);



	cout << fixed << setprecision(2);

	// a map is a collection of STL pairs (real thing)
	map <string, float> gitems; // grocery items
	/* string is the item desc (key)
	 * float is the item price
	 */



	// put some data into the map
	gitems.insert(make_pair("coffee", 1.00));
	gitems.insert(make_pair("tea", 1.25));
	gitems.insert(make_pair("cola", 1.50));

	//display the structure
	map<string, float>::iterator gi;

	for (gi = gitems.begin(); gi != gitems.end(); gi++) {

		cout << gi ->first << " - " << gi -> second << endl;

	}

	// search the map for a given key
	string s = "1";

	while (s != "1") {

		cout << "Enter item to look for: ";
		cin >> s;
		gi = gitems.find(s);

		if (gi != gitems.end()) {
			cout << gi-> first << "====" << gi -> second << endl;

		} else {
			cout << "Not found" << endl;
		}

	}



	return 0;
}
