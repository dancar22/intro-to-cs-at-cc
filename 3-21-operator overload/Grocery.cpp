#include "Grocery.h"

float GroceryItem::calcInventoryValue() {

	return itemQOH * itemCost;

}

void displayGroceryItem(GroceryItem g) {

	cout << "item desc: " << g.itemDesc << " item QOH: " << g.itemQOH << endl;

}

void GroceryItem::setItemDesc(string s) {

	itemDesc = s;

}

//smart copy!
const GroceryItem GroceryItem::operator=(GroceryItem &rhs) {

	itemDesc = rhs.itemDesc;
	itemQOH = rhs.itemQOH;
	itemUPC = rhs.itemUPC;


	return *this;

}


void GroceryItem::operator+=(GroceryItem &rhs) {

	itemQOH += rhs.itemQOH;

}

void GroceryItem::operator-=(GroceryItem &rhs) {

	itemQOH -= rhs.itemQOH;

}

bool GroceryItem::operator==(GroceryItem &rhs) {

	return itemQOH == rhs.itemQOH;

}

bool GroceryItem::operator!=(GroceryItem &rhs) {

	return itemQOH != rhs.itemQOH;

}

GroceryItem::GroceryItem() {

	itemCost = 0;
	itemSellingPrice = 0;
	itemQOH = 0;

}

GroceryItem::GroceryItem(GroceryItem & g) {

	itemDesc = g.itemDesc;
	itemQOH = g.itemQOH;

}

GroceryItem::~GroceryItem() {
	cout << "in destructor" << endl;
}



