/*
 * ProduceItem.h
 *
 *  Created on: Nov 10, 2021
 *      Author: Paul
 */

#ifndef PRODUCEITEM_H_
#define PRODUCEITEM_H_
#include "GroceryItem.hpp"
class ProduceItem : public GroceryItem
{
private:
	bool produceOrganic;
	bool refrigerationRequired;
	bool sprayRequired;
	char producePricingUnit;	// l-per pound, p - per package, u-per unit
	float producePricePerUnit;
public:
	bool getProduceOrganic();
	float getProducePricePerUnit();
	void setProduceOrganic(bool);
	void setProducePricePerUnit(float);
	ProduceItem();
	ProduceItem(string, string, int, float, float, bool, bool, bool, char, float);
};

class DairyItem : public GroceryItem
{
private:
	float dairyPricePerOunce;
	char dairyCartonType;	// p-pint, q-quart, g-gallon, etc.
public:
	float getDairyPricePerOunce();
	char getDairyCartonType();
	void setDairyPricePerOunce(float);
	void setDairyCartonType(char);
	DairyItem();
};

#endif /* PRODUCEITEM_H_ */
