//Delgados Tacos 
//Isaiah Ponciano
//Date: 4/11/17
#include <iostream>
#include <string>

int main()
{

	int Order;

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

	double popOrdered = NULL;
	double tacoOrdered = NULL;
	double tamaleOrdered = NULL;
	double burritoOrdered = NULL;
	double nachoOrdered = NULL;
	double enchiladaOrdered = NULL;
	double chickenAndCornChilaquileOrdered = NULL;
	double fajitaOrdered = NULL;
	double burritoBowlSoupOrdered = NULL;
	double cheesyBeefQuesadillaOrdered = NULL;

	double totalPrice;
	double totalPriceWithOutTax;
	double totalPriceWithTax;

	//Taco Truck

	std::cout << "***********************************************" << std::endl;
	std::cout << "*                                             *" << std::endl;
	std::cout << "*     *******    *    ******  *******         *" << std::endl;
	std::cout << "*        *      * *   *       *     *         *" << std::endl;
	std::cout << "*        *     *****  *       *     *         *" << std::endl;
	std::cout << "*        *    *     * ******  *******         ***************" << std::endl;
	std::cout << "*                                             *          *   *" << std::endl;
	std::cout << "*                                             *          *    *" << std::endl;
	std::cout << "*                                             *          *******" << std::endl;
	std::cout << "*                                             *   ***            *" << std::endl;
	std::cout << "*                                             *                 *" << std::endl;
	std::cout << "*  *******                                    *      *******   *" << std::endl;
	std::cout << "***       *******************************************       ***" << std::endl;
	std::cout << "   *     *                                           *     *" << std::endl;
	std::cout << "   *******                                           *******" << std::endl;

	std::cout << "	 _________________________________________________________  " << std::endl;
	std::cout << "	|														 |	" << std::endl;
	std::cout << "	|														 |  " << std::endl;
	std::cout << "	|				    									 |	" << std::endl;
	std::cout << "	|	1                      Pop | Price | $0.99			 |	" << std::endl;
	std::cout << "	|	2                     Taco | Price | $0.99			 |	" << std::endl;
	std::cout << "	|	3                   Tamale | Price | $0.99			 |	" << std::endl;
	std::cout << "	|	4                  Burrito | Price | $1.99			 | 	" << std::endl;
	std::cout << "	|	5                   Nacho  | Price | $1.99			 |	" << std::endl;
	std::cout << "	|	6                Enchilada | Price | $2.99			 |	" << std::endl;
	std::cout << "	|	7   Chicken & Corn Chilaquile | Price | $2.99		 |	" << std::endl;
	std::cout << "	|	8                   Fajita | Price | $2.99 			 |	" << std::endl;
	std::cout << "	|	9		 Burrito Bowl Soup | Price | $2.99 			 |	" << std::endl;
	std::cout << "	|	10   Cheesy Beef Quesadilla | Price | $3.99 		 | 	" << std::endl;
	std::cout << "	|														 |	" << std::endl;
	std::cout << "	|														 |	" << std::endl;
	std::cout << "	|________________________________________________________|	" << std::endl;



	std::cout << "Welcome to Delgados Tacos, where we make the dos in Delgados. " << std::endl;
	std::cout << "Please select the number of the order you want,\nin chronological order of the menu. ";
	std::cin >> Order;

	//How Many

	if (Order == 1)
	{
		std::cout << "How many Pops do you want?" << std::endl;
		std::cin >> popOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}
	
	if (Order == 2)
	{
		std::cout << "How many Tacos do you want?" << std::endl;
		std::cin >> tacoOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 3)
	{
		std::cout << "How many Tamales do you want?" << std::endl;
		std::cin >> tamaleOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 4)
	{
		std::cout << "How many Burritos do you want?" << std::endl;
		std::cin >> burritoOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 5)
	{
		std::cout << "How many Nachos do you want?" << std::endl;
		std::cin >> nachoOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 6)
	{
		std::cout << "How many Enchiladas do you want?" << std::endl;
		std::cin >> enchiladaOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 7)
	{
		std::cout << "How many Chicken And Corn Chilaquiles do you want?" << std::endl;
		std::cin >> chickenAndCornChilaquileOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 8)
	{
		std::cout << "How many Fajitas do you want?" << std::endl;
		std::cin >> fajitaOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 9)
	{
		std::cout << "How many Burrito Soup Bowls do you want?" << std::endl;
		std::cin >> burritoBowlSoupOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	if (Order == 10)
	{
		std::cout << "How many Cheesy Beef Quesadilla's do you want?" << std::endl;
		std::cin >> cheesyBeefQuesadillaOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> Order;
	}

	else if (Order > 10)
	{

		//Math

		totalPrice = popPrice * popOrdered + tacoPrice * tacoOrdered +
			tamalesPrice * tamaleOrdered + burritoOrdered * burritoPrice + nachoPrice * nachoOrdered +
			EnchiladaPrice * enchiladaOrdered + ChickenAndCornChilaquilesPrice * chickenAndCornChilaquileOrdered +
			FajitaPrice * fajitaOrdered + BurritoBowlSoupEnchiladaPrice * burritoBowlSoupOrdered +
			CheesyBeefQuesadillaPrice * cheesyBeefQuesadillaOrdered;

		totalPriceWithOutTax = totalPrice;
		totalPriceWithTax = totalPriceWithOutTax  * taxRate;

		// Total

		std::cout << " How you ordered " << popOrdered << " Pops," << tacoOrdered << " Tacos, "
			<< tamaleOrdered << " Tamales " << burritoOrdered << " Burritos, " << nachoOrdered << " \rNachos, "
			<< enchiladaOrdered << " Enchilada, " << chickenAndCornChilaquileOrdered << " Chicken And Corn Chilaquile, "
			<< fajitaOrdered << " Fajita, " << burritoBowlSoupOrdered << " \rBurrito Bowl Soup, "
			<< cheesyBeefQuesadillaOrdered << " CheesyBeefQuesadillaOrdered " << " for a total price of " << totalPriceWithOutTax << std::endl;

		//Total with tax

		std::cout << "Your total for all items entered with tax is $" << totalPriceWithTax << std::endl;

	
	}

}