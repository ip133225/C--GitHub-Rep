//TemperatureCalculator
//IsaiahPonciano
//Date: 4/03/17

#include <iostream>
#include <string>

int main()
{

	double Fahrenheit, Celsius, Calculate, Temp1, Temp2, Temp3, ConvertTemp1, ConvertTemp2, ConvertTemp3;
	
	std::cout << "What is the Temperature at 8:00 in Fahrenheit " << std::endl;
	std::cin >> Temp1;

	std::cout << "What is the Temperature at 12:00 Fahrenheit " << std::endl;
	std::cin >> Temp2;

	std::cout << "What is the Temperature at 17:00 in Fahrenheit " << std::endl;
	std::cin >> Temp3;

	ConvertTemp1 = (Temp1 - 32) / 1.8;
	ConvertTemp2 = (Temp2 - 32) / 1.8;
	ConvertTemp3 = (Temp3 - 32) / 1.8;
	
	std::cout << "The Temperature at 8:00 is " << Temp1 << "F or " << ConvertTemp1 << "C." << std::endl;
	std::cout << "The Temperature at 12:00 is " << Temp2 << "F or " << ConvertTemp2 << "C." << std::endl;
	std::cout << "The Temperature at 17:00 is " << Temp3 << "F or " << ConvertTemp3 << "C." << std::endl;

	system("pause");
	return 0;

}