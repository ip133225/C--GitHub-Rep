#include <iostream>
#include <string>


int main()

{
	int A;
	int B;
	int C;

	std::string Color, wordEST, BodyPart, Animal, Noun, PluralNoun;

	std::cout << " Type a color: ";
	std::cin >> Color;

	std::cout << " Type a word ending in est: ";
	std::cin >> wordEST;

	std::cout << " Type a body part: ";
	std::cin >> BodyPart;

	std::cout << " Type a animal: ";
	std::cin >> Animal;

	std::cout << " Type a noun: ";
	std::cin >> Noun;

	std::cout << " Type a plural noun: ";
	std::cin >> PluralNoun;

	std::cout << " Type a number: "; 
	std::cin >> A;

	std::cout << " Type a number less than the first number: ";
	std::cin >> B;

	C = A - B;


	std::cout << " The " << (Color) << " dragon is the " << (wordEST) << " dragon of all.\n It has " << (C) << " " << (BodyPart) << " and a " << (Animal) << " shaped like a " << (Noun) << std::endl;
	std::cout << " it loves to eat " << (PluralNoun) << " although it will feast on nearly anything. " << std::endl;
}