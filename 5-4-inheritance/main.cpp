using namespace std;
#include <iostream>
#include <string>
#include "GroceryItem.hpp"
#include "ProduceItem.h"

void displayGroceryItem(GroceryItem);
void displayProduceItem(ProduceItem);

int main()
{
	GroceryItem g1("31231", "can of peas", 75, 0.79, 0.40);
	displayGroceryItem(g1);

	ProduceItem lettuce;
	lettuce.setProduceOrganic(false);
	lettuce.setItemDesc ("lettuce");
	lettuce.setItemQOH(37);
	displayGroceryItem (lettuce);
	displayProduceItem (lettuce);

	displayProduceItem(lettuce);
	return 0;
}
void displayGroceryItem(GroceryItem g)
{
	cout << "data for GroceryItem object: name and QOH -- " << g.getItemDesc() << "," << g.getItemQOH() << endl << endl;
	return;
}

void displayProduceItem (ProduceItem p)
{
	cout << "organic " << p.getProduceOrganic() << endl;
}
