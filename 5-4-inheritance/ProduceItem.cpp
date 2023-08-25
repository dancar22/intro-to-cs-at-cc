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

