/* Program name: package.cpp
 * By: Kai Li Jin
 * Date: August 6, 2017
 * Description: This is a base class which calls upon the customer class as well as prompts the user to enter the basic package information.
 *
 */
#include "package.h"

// Default constructor
Package::Package() {
	weight = 0;
}	

// Copy constructor
Package::Package(Customer cu, double w, double c) { 
	customer = cu;
	weight = w;
}

// Input method
void Package::input() {
	double w;

	customer.input();
	cout << "Enter the weight of package (oz.): ";
	cin >> w;
	
	setWeight(w);		

}

// Set method for weight
void Package::setWeight(double w) {
	if (w > 0.0001) {
		weight = w;
	}
}

// Get method for weight
double Package::getWeight() {
	return weight;
}

// Method to calculate cost of shipping
double Package::calculateCost() {
	double cost;

	cost = getWeight() * fee;

	return cost;
}

// Display method
void Package::display() {
	customer.display();
	cout << endl;
	cout << "----------Displaying package information----------" << endl;
	cout << "Weight of package: " << getWeight() << " ounces" << endl;
	cout << "Cost per ounce to ship the package: $" << calculateCost() << endl;
}

