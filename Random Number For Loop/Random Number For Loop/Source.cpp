//Random Number For Loop 
//Isaiah Ponciano
//Date: 5/8/17

#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{

	srand(time(0));

	for (int random = 0; random < 10; random++)
	{

		std::cout << 1 + (rand() % 6) << std::endl;
	}

	return 0;
}