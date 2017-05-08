//Random Number Generator Computer Solves
//Isaiah Ponciano
//Date: 5/8/17

#include <iostream>


const int MAX_VALUE = 100;
const int MIN_VALUE = 1;

int guess;
int high = MAX_VALUE;
int low = MIN_VALUE;

char choice;

int main(){

	//User input a number between 1 and 100
	std::cout << "Think about a number between " << MIN_VALUE << " and " << MAX_VALUE << ". \n\n";
	guess = (high - low) / 2;
	//computer start making guesses
	while ((high - low) != 1){
		std::cout << "Is your number less than or equal to " << guess << "? \nEnter y or n. \n\n";
		std::cin >> choice;

		if (choice == 'y' || choice == 'Y') {
			high = guess;
			guess -= (high - low) / 2;
		}
		else if (choice == 'n' || choice == 'N') {
			low = guess;
			guess += (high - low) / 2;
		}
		else std::cout << "Incorrect choice." << std::endl;


	}
	std::cout << "Your number is: " << high << ".\n";

	system("pause");
	return 0;
}