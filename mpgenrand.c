#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIVES 15

/* Guess the number Game */

/* Guess the number game's logic:
	1.) Generate a hidden value within a range (You guys decide) that will
		be the value that the user will guess
	2.) Have the user "Guess" the random number, at which point, the program
		will respond "HIGHER" or "LOWER" according to the guess and it's relative
		position to the hidden value
	3.) Take note of how many guesses it took for the user to guess the value

	Need the following headers:
		Random values:
			stdlib.h
			time.h

	Main Loop: EVENT CONTROLLED
		= We don't know how many guesses it will take for the user to figure out the number
		= while loop

	Conditional Constructs:
		- Checking to see if the user guessed the value
		- If not, if the value is higher or lower than what they guessed

	Loop Construct:
		- Repeatedly asking the user to enter a value as long as they have NOT yet guessed the random
		value
*/

int generateRandomValue(int min,int max)
{
	int randNo;

	randNo = (rand() % (max - min + 1)) + min;

	return randNo;
}

void guessingGame()
{
	// Declare the following:
	// 1 = The value to be guessed
	// 2 = The input proper
	// 3 = A flag (bGuessed) to determine whether the user has "guessed" the value or not
	//		initially, the flag is set to false / 0


	/* Step 1: Initialize the random value that the user will guess */
	/* Step 2: Perform the loop construct accordingly
				Continuously check if the user has guessed the value:
					if guess == value
						WIN
					else if guess < value
						say HIGHER
					else if guess > value
						say LOWER */

	int randomValue; // hidden value
	int bWon = 0; // boolean flag to determine if the user has won or not
	int nGuess; // user input
	int nLives = LIVES; // Determines the no. of guesses available

	randomValue = generateRandomValue (1,1000); // Between 1 to 1000

	system ("cls");
	printf ("A random number has been generated.\n ");

	while (!bWon && nLives > 0)
	{
		printf ("\n");
		printf ("LIVES Left: %d\n",nLives);
		printf ("Enter your guess: ");
		scanf ("%d",&nGuess);

		if (nGuess == randomValue) // WON!
			bWon = 1;
		else if (nGuess < randomValue)
		{
			printf ("Guess HIGHER!\n");
			nLives--;
		}
		else if (nGuess > randomValue)
		{
			printf ("Guess LOWER!\n");
			nLives--;
		}
 	}

 	if (bWon)
 		printf ("CONGRATULATIONS! The number was %d\n",randomValue);
 	else
 		printf ("YOU RAN OUT OF LIVES! The number was %d\n",randomValue);
}


int main()
{
	srand(time(NULL));

	guessingGame();

	return 0;
}
