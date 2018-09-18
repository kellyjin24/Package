// Program name: customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class Customer {
public:
	Customer(); // Default Constructor
	Customer(string, char, string); // Custom constructor
	void input(); // Input method
	void setFirst(string); // Set method for first name
	void setMiddle(char); // Set method for middle initial
	void setLast(string); // Set method for last name
	string getFirst(); // Get method for first name
	char getMiddle(); // Get method for middle initial
	string getLast(); // Get method for last name
	void setHouseNum(int); // Set method for house number
	int getHouseNum(); // Get method for house number
	void setStreet(string); // Set method for street
	string getStreet(); // Get method for street
	void setCity(string); // Set method for city
	string getCity(); // Get method for city
	void setState(string); // Set method for state
	string getState(); // Get method for state
	void setZip(int); // Set method for zip code
	int getZip(); // Get method for zip code
	void display(); // Display method

private:
	string firstName, lastName, street, city, state;
	char middleName;
	int houseNum, zipCode;
};

#endif
