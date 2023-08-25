#include <iostream>
#include <array>
#include <vector>

using namespace std;

void theFunc(array<int, 10> nums) {

	cout << nums[7] << endl;

}


int main() {

	int * p = 0;
	p += 4;
	cout << p << endl;

	array<int, 10> nums;

	nums[3] = 55;
//	cout << nums[0] * 32 << endl;

//	theFunc(nums);

	int numbers[10];
	int j = 0;

//	cout << numbers[j] << endl;

	// can grow; does not have a specified size
	vector<int> nums2;
	// right now vector has 0 elements
	nums2.push_back(6);
	nums2.push_back(5);
	nums2.push_back(25);


	vector<int>::iterator iit;
	vector<double>::iterator dit;


	for (iit = nums2.begin(); iit != nums2.end(); iit++) {



	}

	for (iit = nums2.begin(); iit != nums2.end() && *iit != 25; iit++) {}



	if (iit == nums2.end()) {

		cout << "not found" << endl;
	} else {
		cout << "found a 25 and iit points to it" << endl;
		cout << nums2.at(2) << endl;

		nums2.erase(iit);

		cout << nums2.at(2) << endl;

	}



	return 0;
}
