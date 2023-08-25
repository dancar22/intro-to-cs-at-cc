#include <iostream>

using namespace std;

struct Element {

	Element * p;
	string s;

};


int main() {

	Element * header;
	header = nullptr;
	Element * temp;
	temp = new Element;
	temp -> s = "sam";
	header = temp;
	temp -> p = nullptr;


	temp = new Element;
	temp -> s = "betty";
	temp -> p = header;
	header = temp;





}
