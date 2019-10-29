//Based on a Chap2 exercise of C++ Through game programming of Michael Dawson

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	char playAgain = 'y';

	cout << "\tWelcome to Guess My Number\n\n";

	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "To low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
			cout << "Do you want to play again? type 'y' for yes or 'n' for no: ";
			cin >> playAgain;
		}
	} 
	while (playAgain == 'y');
	





}