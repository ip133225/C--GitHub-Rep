//Random Number Generator
//isaia Ponciano
//Date: 4/24/2017

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int getRandomNumber()
{
	srand(static_cast<unsigned int>(time(0))); // Random number generator
	int randomNumber = rand(); // Generate random number
	int die = (randomNumber % 100) + 1; // Get a number between 1 and 100
	return die;
}

int main()
{
	int number;
	int chances = 0;
	bool correct;
	int z;

	z = getRandomNumber();

	do{
		std::cout << "Pick a number between 1 and 100." << std::endl;
		std::cin >> number;
		chances++; // chances = chances + 1;

		if (number == z)
		{
			std::cout << "You guessed it right! It was " << z << "!" << std::endl;
			correct = true;
		}
		else if (number < z)
		{
			std::cout << "You chose too low!" << std::endl;
		}
		else if (number > z)
		{
			std::cout << "You chose too high!" << std::endl;
		}
		std::cout << "You have used " << chances << " of 5 chances." << std::endl;
		std::cout << " " << std::endl;

	} while (chances != 5);
	std::cout << "The number was " << z << "!" << std::endl;

	system("pause");
	return 0;
}