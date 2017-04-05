//Eggs
//Isaiah Ponciano
//Date: 4/04/17

#include <iostream>;
#include <string>;

int main()
{

	int remainingEggs, dozenEggs, someEggs;
	double dozenPrice, remainingEggCost, grandTotal;
	std::cout << "How many eggs would you like? " << std::endl;
	std::cin >> someEggs;
	std::cout << "" << std::endl;

	remainingEggs = someEggs % 12;

	remainingEggCost = remainingEggs * 0.25;

	dozenEggs = someEggs / 12;

	dozenPrice = dozenEggs * 2;

	grandTotal = dozenPrice + remainingEggCost;

	std::cout << "You have " << dozenEggs << " dozen eggs for a total price of $" << dozenPrice << ".00\nwith remiander of " << remainingEggs << " eggs for a total price of $" << remainingEggCost << ". " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "For a grand total of $" << grandTotal << "! Thank you for shopping with me have a wonderful day." << std::endl;

}