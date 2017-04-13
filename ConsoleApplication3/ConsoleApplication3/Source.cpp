//Hotel
//Isaiah Ponciano
//Date: 4/05/17

#include <iostream>
#include <string>

int main()
{

	double perNightRate, amountOfNights, perMinute, serviceChargeYes_NO,  totalAmount;
	double phoneCharge, grandTotal;
	std::string anotherNightYes_NO;
	double serviceCharge = 35;
	int extraNight=0;
	std::cout << "How many nights would you like to stay? " << std::endl;
	std::cin >> amountOfNights;
	std::cout << " " << std::endl;

	std::cout << "How many minutes where you on the phone? " << std::endl;
	std::cin >> perMinute;
	
		do{


			std::cout << " " << std::endl;

			std::cout << "Would you like to stay another night? " << std::endl;
			std::cin >> anotherNightYes_NO;
			extraNight = extraNight + 100;
			std::cout << " " << std::endl;

		} while (anotherNightYes_NO == "Yes");
	
	phoneCharge = perMinute * .25;
	perNightRate = amountOfNights * 100 + extraNight;
	totalAmount = perNightRate + serviceCharge;
	grandTotal = totalAmount + phoneCharge;

	std::cout << "They have to pay $ " << perNightRate << " for rent " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "They have to pay $ " << serviceCharge << " for the room service. " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "They have to pay $ " << phoneCharge << "0 for the phone bill. " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Your total bill comes to $" << grandTotal << "." << std::endl;

	system("pause");
	return 0;
}