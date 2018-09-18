/* Program name: twoday.cpp
 * By: Kai Li Jin
 * Date: August 6, 2017
 * Description: This is a derived class from the base class (package.cpp). It adjusts the package cost by adding a flat fee for this type of shipment.
 */
#include "twoday.h"

// Input method
void twoDay::input() {
	Package::input();
}	

// Method to calculate two day cost
double twoDay::calculateCost() {
	double cost;
	int counter = 0;

	cost = Package::calculateCost() + tdFee;

	return cost;
}

// Display method
void twoDay::display() {
	Package::display();
	cout << "Cost to ship the package in two days: $" << calculateCost() << endl;
	cout << endl;
}

// Method to calculate total revenue
double twoDay::totalRevenue() {
	double total;
		
	total += calculateCost();

	return total;
}

// Summary display method
void twoDay::displaySummary() {
	cout << "The total amount of money made from all two day shipments is $" << totalRevenue() << endl;
}
