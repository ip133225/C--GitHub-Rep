//Random Number Generator Levels
//Isaiah Ponciano


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
	int number;
	std::string difficulty;

	std::cout << "Please select a diificulty: Easy, Medium, or Hard." << std::endl;
	std::cin >> difficulty;

	if (difficulty == "Easy")
	{
		for (int i = 0; i < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Generate Random Number
			int randomNumber = rand(); // Get random number
			int die = (randomNumber % 10) + 1; // Generate a number between 1 and 10
			do{

				i++;

				std::cout << "Pick a number between 1 and 10." << std::endl;
				std::cin >> number;

				if (number == die)
				{
					std::cout << " " << std::endl;
					std::cout << "Congratulations, You guessed it right!" << std::endl;
				}
				else if (number > die)
				{
					std::cout << " " << std::endl;
					std::cout << "You guessed too high" << std::endl;
				}
				else
				{
					std::cout << " " << std::endl;
					std::cout << "You guessed too low" << std::endl;
				}
				std::cout << "You have used " << i << " out of 5 chances" << std::endl;
				std::cout << " " << std::endl;

			} while (i != 5);
			std::cout << "The number was " << die << std::endl;
		}
	}

	if (difficulty == "Medium")
	{
		for (int j = 0; j < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Generate Random Number
			int randomNumber = rand(); // Get random number
			int die = (randomNumber % 100) + 1; // Generate a number between 1 and 100
			do{

				j++;

				std::cout << "Choose a number between 1 and 100." << std::endl;
				std::cin >> number;

				if (number == die)
				{
					std::cout << " " << std::endl;
					std::cout << "Congratulations, You guessed it right!" << std::endl;
				}
				else if (number > die)
				{
					std::cout << " " << std::endl;
					std::cout << "You guessed too high" << std::endl;
				}
				else
				{
					std::cout << " " << std::endl;
					std::cout << "You guessed too low" << std::endl;
				}
				std::cout << "You have used " << j << " out of 5 chances" << std::endl;
				std::cout << " " << std::endl;

			} while (j != 5);
			std::cout << "The number was " << die << std::endl;
		}

	}

	if (difficulty == "Hard")
	{
		for (int l = 0; l < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Generate Random Number
			int randomNumber = rand(); // Get random number
			int die = (randomNumber % 1000) + 1; // Generate a number between 1 and 1000
			do{

				l++;

				std::cout << "Choose a number between 1 and 1000." << std::endl;
				std::cin >> number;

				if (number == die)
				{
					std::cout << " " << std::endl;
					std::cout << "Congratulations, You guessed it right!" << std::endl;
				}
				else if (number > die)
				{
					std::cout << " " << std::endl;
					std::cout << "You guessed too high" << std::endl;
				}
				else
				{
					std::cout << " " << std::endl;
					std::cout << "You guessed too low" << std::endl;
				}
				std::cout << "You have used " << l << " out of 5 chances" << std::endl;
				std::cout << " " << std::endl;

			} while (l != 5);
			std::cout << "The number was " << die << std::endl;
		}
	}

	system("pause");
	return 0;
}