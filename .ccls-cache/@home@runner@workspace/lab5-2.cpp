//lab5-2.cpp - displays the total amount due
//Created/revised by Fidel Cruz on 2/18/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double purchase, totalAmount, shippingFee;
	const double discount = 0.1;
	char clubMember;

cout << "Premier Club Membership: (Y/N)? ";
	cin >> clubMember;

	cout << "Enter the purchase amount: ";
	cin >> purchase;

	totalAmount = purchase;
	
	if (toupper(clubMember) == 'Y') {
	totalAmount -= totalAmount * discount;
	}
		
	
	if (purchase >= 100) {
		shippingFee = 0.99;
	}
		
	else {
		shippingFee = 4.99;
	}
	
		totalAmount = purchase + shippingFee;

	cout << "Total amount due: $" << totalAmount << endl;

	

	return 0;
}	//end of main function