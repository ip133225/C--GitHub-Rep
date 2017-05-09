//Random Addition Problem 
//Isaiah Ponciano
//Date: 5/9/17

#include <iostream>
#include <cstdlib>
#include <ctime>


void checkAnswer(int answer, int userAnswer);
int generateQuestion();

int x;
int y;

int main(int argc, char *argv[])
{
	srand(time(NULL));
	for (int i = 0; i<5; i++)
	{
		int answer;
		int userAnswer;

		answer = generateQuestion();
		std::cin >> userAnswer;
		checkAnswer(answer, userAnswer);
	}
	return 0;
}

int generateQuestion()
{
	int answer;

	x = 1 + rand() % 100;
	y = 1 + rand() % 100;
	answer = x + y;
	std::cout << "What is the sum of " << x << "+" << y << "?";

	return answer;
}

void checkAnswer(int answer, int userAnswer)
{
	if (answer == userAnswer)
	{
		std::cout << "Congratulations, You are correct!\n\n";
	}
	else if (answer != userAnswer)
	{
		std::cout << "Sorry, The correct answer is " << answer << ".\n\n";
	}
}