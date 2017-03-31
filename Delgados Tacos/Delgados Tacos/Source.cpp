//Delgados Tacos 
//Your name
//Date:
#include <iostream>
#include <string>

int main()
{
	double popPrice = 0.99;
	double tacoPrice = 0.99;
	double tamalesPrice = 0.99;
	double burritoPrice = 1.99;
	double nachoPrice = 1.99;
	double EnchiladaPrice = 2.99;
	double ChickenAndCornChilaquilesPrice = 2.99;
	double FajitaPrice = 2.99;
	double BurritoBowlSoupEnchiladaPrice = 2.99;
	double CheesyBeefQuesadillaPrice = 3.99;
	

	const double taxRate = 1.075;

	double popOrdered;
	double tacoOrdered;
	double tamaleOrdered;
	double burritoOrdered;
	double nachoOrdered;
	double enchiladaOrdered;
	double chickenAndCornChilaquileOrdered;
	double fajitaOrdered;
	double burritoBowlSoupOrdered;
	double cheesyBeefQuesadillaOrdered;

	double totalPrice;
	double totalPriceWithTax;

	totalPriceWithTax = totalPrice * taxRate;

	std::cout << "Welcome to Delgados Tacos, where we make the dos in Delgados. " << std::endl;

	std::cout << "How many pops do you want?" << std::endl;
	std::cin >> popOrdered;

	std::cout << "How many tacos do you want?" << std::endl;
	std::cin >> tacoOrdered;

	std::cout << "How many tamales do you want?" << std::endl;
	std::cin >> tamaleOrdered;

	std::cout << "How many burrito do you want?" << std::endl;
	std::cin >> burritoOrdered;

	std::cout << "How many nacho do you want?" << std::endl;
	std::cin >> nachoOrdered;

	std::cout << "How many enchilada do you want?" << std::endl;
	std::cin >> enchiladaOrdered;

	std::cout << "How many chickenAndCornChilaquile do you want?" << std::endl;
	std::cin >> chickenAndCornChilaquileOrdered;

	std::cout << "How many fajita do you want?" << std::endl;
	std::cin >> fajitaOrdered;

	std::cout << "How many burritoBowlSoup do you want?" << std::endl;
	std::cin >> burritoBowlSoupOrdered;


	std::cout << "How many cheesyBeefQuesadilla do you want?" << std::endl;
	std::cin >> cheesyBeefQuesadillaOrdered;

	totalPrice = popPrice * popOrdered + tacoPrice * tacoOrdered +
	tamalesPrice * tamaleOrdered + burritoOrdered * burritoPrice + nachoPrice * nachoOrdered +
	EnchiladaPrice * enchiladaOrdered + ChickenAndCornChilaquilesPrice * chickenAndCornChilaquileOrdered +
	FajitaPrice * fajitaOrdered + BurritoBowlSoupEnchiladaPrice * burritoBowlSoupOrdered +
	CheesyBeefQuesadillaPrice * cheesyBeefQuesadillaOrdered;

	std::cout << " How you ordered " << popOrdered << " Pops," << tacoOrdered << " Tacos, "
		<< tamaleOrdered << " Tamales " << burritoOrdered << " Burritos, " << nachoOrdered << " \rNachos, "
		<< enchiladaOrdered << " Enchilada, " << chickenAndCornChilaquileOrdered << " Chicken And Corn Chilaquile, "
		<< fajitaOrdered << " Fajita, " << burritoBowlSoupOrdered << " \rBurrito Bowl Soup, "
		<< cheesyBeefQuesadillaOrdered << " CheesyBeefQuesadillaOrdered " << " for a total price of " << totalPrice << totalPriceWithTax  << std::endl;

	std::cout <<	"***********************************************"					<< std::endl;
	std::cout <<	"*                                             *"					<< std::endl;
	std::cout <<	"*     *******    *    ******  *******         *"					<< std::endl;
	std::cout <<	"*        *      * *   *       *     *         *"					<< std::endl;
	std::cout <<	"*        *     *****  *       *     *         *"					<< std::endl;
	std::cout <<	"*        *    *     * ******  *******         ***************"		<< std::endl;
	std::cout <<	"*                                             *          *   *"		<< std::endl;
	std::cout <<	"*                                             *          *    *"			<< std::endl;
	std::cout <<	"*                                             *          *******"				<< std::endl;
	std::cout <<	"*                                             *   ***            *"		<< std::endl;
	std::cout <<	"*                                             *                 *"		<< std::endl;
	std::cout <<	"*  *******                                    *      *******   *"	<< std::endl;
	std::cout <<	"***       *******************************************       ***"	<< std::endl;
	std::cout <<	"   *     *                                           *     *"		<< std::endl;
	std::cout <<	"   *******                                           *******"		<< std::endl;
}