

#include <iostream>
using namespace std;

float mathFcn(int i, float f) {

	return 3.5f;


}

float mathFcn(string i, string f) {

	return 3.5f;
}



int main() {

	mathFcn(3, 3.3f);
	mathFcn('3', '5');


	return 0;
}
