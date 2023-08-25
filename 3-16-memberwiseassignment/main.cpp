#include "Grocery.h"
#include <iostream>

using namespace std;



int main() {


	GroceryItem milk, eggs;

	milk.itemDesc = "Grade A milk";
	milk.itemQOH = 45;
	eggs.itemDesc = "1 dz large grade A eggs";
	eggs.itemQOH = 33;

	displayGroceryItem(milk);

	displayGroceryItem(eggs);

	GroceryItem milk2;

//	member wise assignment
//	aka dumb copy
//	milk2.each member = milk.each member
//	Copies ALL members

	milk2 = milk;

	milk2.itemDesc[6] = 'B';

	displayGroceryItem(milk2);




	return 0;
}
