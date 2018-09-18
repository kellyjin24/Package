// Program name: package.h
#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include "customer.h"
using namespace std;

class Package {
public:
	static const int fee = 2;
	static int cost;

	Package(); // Default constructor 
	Package(Customer, double, double); // Copy constructor
	void input(); // Input method
	void setWeight(double); // Set method for weight 
	double getWeight(); // Get method for weight 
	double calculateCost(); // Method to calculate cost
	void display(); // Display method

protected:
	Customer customer;
	double weight;
};

#endif
