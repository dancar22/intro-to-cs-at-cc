#ifndef GROCERY_H_
#define GROCERY_H_

#include <iostream>

using namespace std;

class GroceryItem {

public:

	string itemUPC;
	string itemDesc;
	int itemQOH;
	float itemCost;
	float itemSellingPrice;
	float calcInventoryValue(); // inventory value is equal to QOH * itemCost
	void setItemDesc(string);

	//operator overloads
	const GroceryItem operator=(GroceryItem &);
	void operator+=(GroceryItem &);
	void operator-=(GroceryItem &);
	bool operator==(GroceryItem &);
	bool operator!=(GroceryItem &);



	GroceryItem(); // constructor
	GroceryItem(GroceryItem &);
	~GroceryItem();





};

void displayGroceryItem(GroceryItem);



#endif
