//hw5-12.cpp - displays the total owed
//Created/revised by Fidel Cruz on 2/18/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price1, price2, total; 

	cout << "Enter the price of item 1: ";
	cin >> price1;
	cout << "Enter the price of item 2: ";
	cin >> price2;
	
	
	if (price1 < price2) {
	total = price1 * 0.5 + price2;
	}
		
	else if (price1 > price2) {
	total = price2 * 0.5 + price1;
	}
		
	else if (price1 = price2) {
	total == price1 * 0.5 + price2;
	}
	
	cout << "Total owed: $" << total << endl;
	
		
		

	return 0;
}	//end of main function