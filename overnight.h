// Program name: overnight.h
#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include <iostream>
#include "package.h"
using namespace std;

class Overnight:public Package {
public:
	static const int addFee = 3;
	static double total;
	
	void input(); // Input method
	double calculateCost(); // Method to calculate overnight cost
	void display(); // Display method
	double totalRevenue(); // Method to calculate total revenue
	void displaySummary(); // Summary display method

private:

};

#endif
