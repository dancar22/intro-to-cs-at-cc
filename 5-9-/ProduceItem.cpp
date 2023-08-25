/*
 * ProduceItem.cpp
 *
 *  Created on: Nov 10, 2021
 *      Author: Paul
 */

#include "ProduceItem.h"

bool ProduceItem::getProduceOrganic()
{
	return produceOrganic;
}
float ProduceItem::getProducePricePerUnit()
{
	return producePricePerUnit;
}
void ProduceItem::setProduceOrganic(bool b)
{
	produceOrganic = b;
}
void ProduceItem::setProducePricePerUnit(float f)
{
	producePricePerUnit = f;
}
ProduceItem::ProduceItem()
{

}

ProduceItem::ProduceItem(string s1, string s2, int i1, float f1, float f2, bool b1, bool b2, bool b3, char c1, float f3) : GroceryItem(s1, s2, i1, f1, f2)  {


	produceOrganic = b1;
	refrigerationRequired = b2;
	sprayRequired = b3;
	producePricingUnit = c1;
	producePricePerUnit = f3;

}


float DairyItem::getDairyPricePerOunce()
{
	return dairyPricePerOunce;
}
char DairyItem::getDairyCartonType()
{
	return dairyCartonType;
}
void DairyItem::setDairyPricePerOunce(float f)
{
	dairyPricePerOunce = f;
}
void DairyItem::setDairyCartonType(char c)
{
	dairyCartonType = c;
}
DairyItem::DairyItem()
{
}

