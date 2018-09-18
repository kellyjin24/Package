/* Program name: customer.cpp
 * By: Kai Li Jin
 * Date: August 6, 2017
 * Description: This class interacts with the base class (package.cpp) through object composition. It prompts the user to enter his/her personal information.
 */
#include "customer.h"

// Default constructor
Customer::Customer() {
	setFirst("XXXXX");
	setMiddle('X');
	setLast("XXXXX");
}

// Custom constructor
Customer::Customer(string fname, char mname, string lname) {
	setFirst(fname);
	setMiddle(mname);
	setLast(lname);
}

// Input method
void Customer::input() {
	string fname, lname, st, c, s;
	char mname;
	int hNum, z;

	cout << endl;
	cout << "----------Enter information----------" << endl;
	cout << "Name (first, middle initial, last): ";
	cin >> fname >> mname >> lname;

	setFirst(fname);
	setMiddle(mname);
	setLast(lname);

	cout << "House number: ";
	cin >> hNum;
	setHouseNum(hNum);
	
	cout << "Street: ";
	cin.ignore();
	getline(cin, st);
	setStreet(st);

	cout << "City: ";
	getline(cin, c);
	setCity(c);		

	cout << "State: ";
	getline(cin, s);
	setState(s);

	cout << "Zip code: ";
	cin >> z;
	setZip(z);
}

// Set method for first name
void Customer::setFirst(string fname) {
	firstName = fname;
}

// Set method for middle initial
void Customer::setMiddle(char mname) {
	middleName = mname;
}

// Set method for last name
void Customer::setLast(string lname) {
	lastName = lname;
}

// Get method for first name
string Customer::getFirst() {
	return firstName;
}

// Get method for middle initial
char Customer::getMiddle() {
	return middleName;
}

// Get method for last name
string Customer::getLast() {
	return lastName;
}

// Set method for house number
void Customer::setHouseNum(int hNum) {
	if (hNum > 0) {
		houseNum = hNum;
	}
}

// Get method for house number
int Customer::getHouseNum() {
	return houseNum;
}

// Set method for street
void Customer::setStreet(string st) {
	street = st;
}

// Get method for street
string Customer::getStreet() {
	return street;
}

// Set method for city
void Customer::setCity(string c) {
	city = c;
}

// Get method for city
string Customer::getCity() {
	return city;
}

// Set method for state
void Customer::setState(string s) {
	state = s;		
}

// Get method for state
string Customer::getState() {
	return state;
}

// Set method for zip code
void Customer::setZip(int z) {
	if (z >= 10000 && z <= 99999) {
		zipCode = z;
	}
}

// Get method for zip code
int Customer::getZip() {
	return zipCode;
}

// Display method
void Customer::display() {
	cout << endl;
	cout << "----------Displaying personal information----------" << endl;
	cout << "Name: " << getFirst() << " " << getMiddle() << ". " << getLast() << endl;
	cout << "Address: " << getHouseNum() << " " << getStreet() << endl;
	cout << getCity() << ", " << getState() << " " << getZip() << endl;	

}
