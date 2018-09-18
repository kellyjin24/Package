// Program name: twoday.h
#ifndef TWODAY_H
#define TWODAY_H
#include <iostream>
#include "package.h"
using namespace std;

class twoDay:public Package {
public:
	static const int tdFee = 3;
	static double total;

	void input(); // Input method 
	double calculateCost(); // Method to calculate two day cost
	void display(); // Display method
	double totalRevenue(); // Method to calculate total revenue
	void displaySummary(); // Summary display method

private:
	
};

#endif
