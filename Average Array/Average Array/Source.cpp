//Average Array
//Isaiah Ponciano
//Date: 5/10/17

#include <iostream>
using namespace std;

//Function Prototype
double getTotal(double numsUsed[], int numElements);

int main()
{
	//Declare Array
	double numbers[6] = { 23, 6, 47, 35, 2, 14 };
	//Variables
	double total = 0.0;
	double average = 0.0;

	//Calculate Total & Average 
	total = getTotal(numbers, 6);
	average = total / 6;

	cout << "Total: " << total << endl;
	cout << "Average:" << average << endl;

	//System("pause");
	return 0;
}
//Function Defs
double getTotal(double numsUse[], int numElements)
{
	double totalUsed = 0.0;

	for (int sub = 0; sub < numElements; sub += 1)
		totalUsed += numsUse[sub];

	return totalUsed;


}

