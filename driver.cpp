/* Program name: driver.cpp
 * By: Kai Li Jin
 * Date: August 6, 2017
 * Description: The driver file allows the user to choose which of the two derived classes to invoke and provides and option to quit. The program ends with a short summary/statistics of the shipments.
 */
#include "twoday.h"
#include "overnight.h"

int main() {
	twoDay *tPtr = NULL;
	Overnight *oPtr = NULL;
	char answer;
	int size;
	static const int MAX = 100;
	static int twoDayCount = 0, overnightCount = 0;
	
//	do {
		cout << endl;
		cout << "Choose how you would like to ship your package: " << endl;
		cout << "A. Two-day" << endl;
		cout << "B. Overnight" << endl;
		cout << "C. Exit" << endl;
		cout << "Enter here: ";
		cin >> answer;

		switch (answer) {
			case 'a':
			case 'A':
				cout << "Enter quantity of packages: ";
				cin >> size;

				if (size <= MAX) {
					tPtr = new twoDay[size];

					for (int i = 0; i < size; i++) {
						tPtr[i].input();
						twoDayCount++;
					}
				}
			break;

			case 'b':
			case 'B':
				cout << "Enter quantity of packages: ";
				cin >> size;
		
				if (size <= MAX) {
					oPtr = new Overnight[size];		

					for (int i = 0; i < size; i++) {
						oPtr[i].input();
						overnightCount++;
					}
				}
			break;

			case 'c':
			case 'C':
				cout << "Exited." << endl;
			break;
}
//			case 'c':
//			case 'C':
				for (int i = 0; i < size; i++) {
					cout << endl;
					tPtr[i].display();
					oPtr[i].display();
					cout << endl;
				
					cout << "Total two day shipments: " << twoDayCount << endl;
					cout << "Total overnight shipments: " << overnightCount << endl;
					tPtr[i].displaySummary();
					oPtr[i].displaySummary();
				}
//			break;
//		}

//	} while (answer == 'a' || answer == 'A' || answer == 'b' || answer == 'B');
	
	delete [] tPtr;
	tPtr = NULL;

	delete [] oPtr;
	oPtr = NULL;

	cout << endl;
	cout << "Have a nice day!" << endl;
	
	return 0;
}
