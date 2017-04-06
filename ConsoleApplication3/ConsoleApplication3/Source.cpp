//Hotel
//Isaiah Ponciano
//Date: 4/05/17

#include <iostream>
#include <string>

int main()
{

	int perNightRate, amountOfNights, serviceCharge, perMinute, serviceTimes, serviceChargeYes_NO, grandTotal, totalAmount;
	double phoneCharge;

	std::cout << "How many nights did they stay? " << std::endl;
	std::cin >> amountOfNights;

	std::cout << "Did they pay for the room service? " << std::endl;
	std::cin >> serviceChargeYes_NO; 

	std::cout << "How many minutes where they on the phone? " << std::endl;
	std::cin >> perMinute;

	serviceCharge = serviceChargeYes_NO * 35;
	phoneCharge = perMinute * .25;
	perNightRate = amountOfNights * 100;
	totalAmount = perNightRate + serviceCharge;
	grandTotal = totalAmount + phoneCharge;

	std::cout << "They have to pay $ " << perNightRate << " for rent " << std::endl;
	std::cout << "They have to pay $ " << serviceCharge << " for the room service. " << std::endl;
	std::cout << "They have to pay $ " << phoneCharge << "0 for the phone bill. " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Their total bill comes to $" << grandTotal << "." << std::endl;

	system("pause");
	return 0;
}