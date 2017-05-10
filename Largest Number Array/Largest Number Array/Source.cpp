//Largest Number Array
//Isaiah Ponciano

#include <iostream>
using namespace std;
int main()
{


	int array[6] = { 23, 6, 47, 35, 2, 14 };

	cout << "\n The contents of the array are : " << endl;
	cout << "\n         Elements :" << "\t\tValue:" << endl;

	for (int count_1 = 0; count_1<6; count_1++)
	{
		cout << "\t" << " array [" << count_1 << "]" << "\t\t" << array[count_1]
			<< endl;
	}


	int largest_number = array[0];

	for (int count_2 = 0; count_2<6; count_2++)
	{
		if (array[count_2]>largest_number)
			largest_number = array[count_2];
	}

	cout << "\n The largest number of the array is = " << largest_number << endl;


	return 0;
}