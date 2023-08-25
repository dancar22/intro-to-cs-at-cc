#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <iomanip>
#include "Bus.h"

/*	Displays a set of buses with an appropriate header
 * 	Input:
 * 		busSet - array of buses that will be displayed
 * 		size - int that represents the number of buses
 * 	Output:
 * 		displays the set of buses to the console
 */
void displayBusSet(Bus[], int);

/*	Displays a singular bus with an appropriate header
 * 	Input:
 * 		b - bus that will be printed to the console
 * 	Output:
 * 		displays the bus to the console
 */
void displayBusSet(Bus);

/*	Displays a properly formated header for bus data
 * 	Input:
 * 		N/A
 * 	Output:
 * 		header is displayed to the console
 */
void displayCH();


#endif
