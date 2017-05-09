//Currency Chapter 6 
//Isaiah Ponciano
//Date: 5/9/17

#include <iostream>

int main()
{
	int AmericanDollar = 1;
	int BritishPound = .6318;
	int MexicanPesos = 12.8863;
	int JapaneseYen = 82.34;

	double TotalPounds;
	double TotalPesos;
	double TotalYen;

	


	std::cout << "Welcome to the currency converter. " << std::endl;

	std::cout << "How Many American Dollars to you want to Convert into Pounds???" << std::endl;
	std::cin >> TotalPounds;

	std::cout << "How Many American Dollars to you want to Convert into Pesos???" << std::endl;
	std::cin >> TotalPesos;

	std::cout << "How Many American Dollars to you want to Convert into Yen???" << std::endl;
	std::cin >> TotalYen;

	TotalPounds = AmericanDollar * BritishPound;
	TotalPesos = AmericanDollar * MexicanPesos;
	TotalYen = AmericanDollar * JapaneseYen;

	std::cout << "You have " << TotalPounds << " British pounds. You also have " << TotalPesos << " Pesos \n You have this many Yen " << TotalYen << std::endl;




}