#include "Grocery.h"

float GroceryItem::calcInventoryValue() {

	return itemQOH * itemCost;

}

void displayGroceryItem(GroceryItem g) {

	cout << "item desc: " << g.itemDesc << " item QOH: " << g.itemQOH << endl;

}

GroceryItem::GroceryItem() {

	cout << "in GroceryItem constructor" << endl;
	itemCost = 0;
	itemSellingPrice = 0;
	itemQOH = 0;

}

GroceryItem::GroceryItem(GroceryItem & g) {

	cout << "in GroceryItem copy constructor" << endl;
	itemCost = 0;
	itemSellingPrice = 0;
	itemQOH = 0;


}


