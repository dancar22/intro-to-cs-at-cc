#include <iostream>
#include "Grocery.h"

using namespace std;

int main() {

	GroceryItem milk;
	milk.itemDesc = "Grade A milk";
	milk.itemQOH = 50;
	displayGroceryItem(milk);
	GroceryItem milk2;
	milk2 = milk;
	displayGroceryItem(milk2);
	GroceryItem eggs;
	eggs.itemQOH = 60;

	milk += eggs; //take QOH from rhs to QOH on lhs
	displayGroceryItem(milk);
	eggs -= milk;
	displayGroceryItem(eggs);


	return 0;
}
