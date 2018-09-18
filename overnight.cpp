/* Program name: overnight.cpp
 * By: Kai Li Jin
 * Date: August 6, 2017
 * Description: This is a derived class from the base class (package.cpp). It adjusts the package cost by taking into account another fee per ounce for this type of shipment.
 */
#include "overnight.h"

// Input method
void Overnight::input() {
	Package::input();
}

// Method to calculate overnight cost
double Overnight::calculateCost() {
	double cost;

	cost = Package::calculateCost() * addFee;

	return cost;
}

// Display method
void Overnight::display() {
	Package::display();
	cout << "Cost to ship the package overnight: $" << calculateCost() << endl;
	cout << endl;
}

// Method to calculate total revenue
double Overnight::totalRevenue() {
	double total;

	total += calculateCost();

	return total;
}

// Summary display method
void Overnight::displaySummary() {
	cout << "The total amount of money made from all overnight shipments is $" << totalRevenue() << endl;
}
