//Lost Fortune
//A personalized adventure

#include <iostream>
#include <string>

int main()
{
	const int GOLD_PEICES = 900;
	int adventure, killed, survivors, years;
	std::string leader, boat;

	//get the information
	std::cout << "Welcome to Lost Fortune" << std::endl;
	std::cout << "Please enter the following for your personalized adventure" << std::endl;

	std::cout << "Enter the number of Adventurers in your party: ";
	std::cin >> adventure;

	std::cout << "Enter a number , smaller than the first ";
	std::cin >> killed;

	survivors = adventure - killed;
	years = adventure + killed;

	std::cout << "Enter your last name: ";
	std::cin >> leader;

	std::cout << "Enter a noun: ";
	std::cin >> boat;

	//The story so far.
	std::cout << "\nA brave group of " << adventure << " set out on a quest " << std::endl;
	std::cout << "-- in search of the lost treasure of ancient Dwarves. " << std::endl;
	std::cout << "The group was lead by the legendary Paladin. " << leader << std::endl;

	std::cout << "\nAlong the way, a band of maruading ogres ambusged the party. "  << std::endl;
	std::cout << "All fought bravely under the command of " << leader << std::endl;
	std::cout << ", and the ogres were defeated, but at a cost. " << std::endl;
	std::cout << "Of the adventures,  " << killed << " were vanquished, " << std::endl;

	std::cout << "leaving just  " << survivors << " in the group.\n" << std::endl;
	std::cout << "\nThe party was about to give up all hope. " << std::endl;
	std::cout << "But while laying they deceased to rest, " << std::endl;
	std::cout << "they stumbled upon a buried fortune. " << std::endl;
	std::cout << "So the adventures split " << GOLD_PEICES << " gold peices." << std::endl;
	std::cout << leader << " held on to the extra " << (GOLD_PEICES % survivors)<< std::endl;
	std::cout << " peices to keep things fair of course.\n" << std::endl;
	std::cout << " The leader " << leader << "  left on the great boat " << boat << std::endl;
	std::cout << " And was not seen for " << years << " years." << std::endl;
}