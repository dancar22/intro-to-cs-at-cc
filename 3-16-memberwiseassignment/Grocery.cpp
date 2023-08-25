#include "Grocery.h"

float GroceryItem::calcInventoryValue() {

	return itemQOH * itemCost;

}

void displayGroceryItem(GroceryItem g) {

	cout << "item desc: " << g.itemDesc << " item QOH: " << g.itemQOH << endl;

}



