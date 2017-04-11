//SwatTheBugs16.cpp - displays the bonus due for sales over $10,000
//Isaiah Ponciano
//Date:4/11/17

#include <iostream>
#include <iomanip>


int main()
{
	//declare named constant and variables
	const double RATE = .1;
	double sales = 0.0;
	double bonus = 0.0;

	//enter input
	std::cout << "Enter the sales amount: ";
	std::cin >> sales;

	//display output
	if (sales < 10000)
	{
		bonus = RATE * sales;
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "Bonus: $" << bonus << std::endl;
	}
	else
		std::cout << "Sorry, you do not recieve a bonus." << std::endl;
	//end if

	system("pause");
	return 0;
}	//end of main function
