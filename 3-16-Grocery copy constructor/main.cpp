#include <iomanip>
#include "Grocery.h"

using namespace std;

int main() {



	GroceryItem milk, eggs;

	milk.itemDesc = "Grade A milk";
	milk.itemQOH = 45;
	eggs.itemDesc = "1 dz large grade A eggs";
	eggs.itemQOH = 33;

	int i;
	int j = i;

	GroceryItem milk2 = milk;
	displayGroceryItem(milk2);


	return 0;
}


