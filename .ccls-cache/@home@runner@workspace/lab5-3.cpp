//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double purchase, totalAmount, shippingFee;
		const double discount = 0.1;
		const double nonClub = 0.05;
		char clubMember;

	cout << "Premier Club Membership: (Y/N)? ";
		cin >> clubMember;

		cout << "Enter the purchase amount: ";
		cin >> purchase;

		totalAmount = purchase;

		if (toupper(clubMember) == 'Y') {
		totalAmount -= totalAmount * discount;
		} 

		else {
			totalAmount -= totalAmount * nonClub;
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