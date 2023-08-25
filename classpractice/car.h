#ifndef CAR_H_
#define CAR_H_

#include <string>

using namespace std;

class Car {

private:
	int numSeats;
	string brand;
	string type;

public:


	Car(int = 0, string = "Aston Martin", string = "");
	int getNumSeats();
	string getBrand();
	string getType();
	void setNumSeats(int);
	void setBrand(string);
	void setType(string);



};





#endif
