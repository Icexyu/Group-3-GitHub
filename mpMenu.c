#include <stdio.h>
#include <stdlib.h>

/* Designing a User Interface

Main Flow of a user interface:
	1.) Ask the user for an input
		[1...n-2] Options -> A new window
		[n] 	"Exit UI" -> Quit the program or return to the prevoius
	2.) Check if the value entered by user is within the range of 1 - n inclusively
		re-check if invalid through the inner do-while
	3.) Proess the input of the user accordingly
	4.) Repeat through the outer do-while

1.) do-while for "the outer"
	outer = Used to determine if the user will leave the interface
	condition = boolean flag to determine if the user will leave the interface or not
				true condition: boolean flag is false

2.)	do-while for "the inner"
	inner = Check validity of input
	condition = Check if the input is valid or not:
				true condition: An invalid input

Header file required:
	stdlib.h = system("cls"); = Allows us to clear the screen
*/

void MenuStart()
{
	/* This function shows the title of the game and serves as a menu starter
		option 1 = Start the game // starts the minigame
		option 2 = Rules of the game // shows the premise of the game
		option 3 = Leave // quits
	*/

	int bQuit = 0; // The boolean integer flag for the outer loop
	int nChoice; // Variable used for user input
	do // Outer Loop
	{
		do
		{
			system("cls"); // Clear the screen
			printf("╭------------------------------------------------------------------------------------------------------------------------------------╮\n");
			printf("|                                    _____                          ______                                                           |\n");
			printf("|                                   / ____|                        |  ____|                                                          |\n");
			printf("|                                  | (___  _ __  _   _    __  __   | |__ ___  _ __ __ _  ___ _ __ ___                                |\n");
			printf("|                                   ╲___ ╲| '_ ╲| | | |   ╲ ╲/ /   |  __/ _ ╲| '__/ _` |/ _ ╲ '__/ __|                               |\n");
			printf("|                                   ____) | |_) | |_| |    >  <    | | | (_) | | | (_| |  __/ |  ╲__ ╲                               |\n");
			printf("|                                  |_____/| .__/ ╲__, |   /_/╲_╲   |_|  ╲___/|_|  ╲__, |╲___|_|  |___/                               |\n");
			printf("|                                         | |     __/ |                            __/ |                                             |\n");
			printf("|                                         |_|    |___/                            |___/                                              |\n");
			printf("|                                         |_|                                                                                        |\n");
			printf("|                                                                                                                                    |\n");
   			printf("|        ____                       _   _                     _____ _       _ _               _____ _             _ _                |\n");
  			printf("|       / __ ╲                     | | (_)             _     / ____| |     | | |             / ____| |           | (_)               |\n");
 			printf("|      | |  | |_ __   ___ _ __ __ _| |_ _  ___  _ __  (_)   | (___ | |_ ___| | | __ _ _ __  | (___ | |_ _   _  __| |_  ___  ___      |\n");
 			printf("|      | |  | | '_ ╲ / _ ╲ '__/ _` | __| |/ _ ╲| '_ ╲        ╲___ ╲| __/ _ ╲ | |/ _` | '__|  ╲___ ╲| __| | | |/ _` | |/ _ ╲/ __|     |\n");
 			printf("|      | |__| | |_) |  __/ | | (_| | |_| | (_) | | | | _     ____) | ||  __/ | | (_| | |     ____) | |_| |_| | (_| | |  __/╲__ ╲     |\n");
  			printf("|       ╲____/| .__/ ╲___|_|  ╲__,_|╲__|_|╲___/|_| |_|(_)   |_____/ ╲__╲___|_|_|╲__,_|_|    |_____/ ╲__|╲__,_|╲__,_|_|╲___||___/     |\n");
        	printf("|             | |                                                                                                                    |\n");
        	printf("|             |_|                                                                                                                    |\n");
			printf("|                                                          The Minigame!                                                             |\n");
			printf("╰------------------------------------------------------------------------------------------------------------------------------------╯\n");
			printf ("\n");
			printf ("[1] - Start the game!\n");
			printf ("[2] - Rules of the game\n");
			printf ("[3] - Leave!\n");
			printf ("\n");
			printf ("Your choice: ");
			scanf ("%d",&nChoice);

		} while (!(nChoice >= 1 && nChoice <= 3));

		if(nChoice==1)
			{
			printf ("Insert code\n");
			}
		else if (nChoice==2)
			{
			printf ("Insert code\n");
			}
		else if (nChoice==3)
			{
			bQuit=1;
            system("pause");
			}

	} while(!bQuit);
}

int main()
{

	MenuStart();
	return 0;
}
