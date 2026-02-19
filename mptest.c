#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*********************************************************************
******
This is to certify that this project is my own work, based on my personal
efforts in studying and applying the concepts learned. I have
constructed the functions and their respective algorithms and
corresponding code by myself. The program was run, tested, and debugged
by my own efforts. I further certify that I have not copied in part or
whole or otherwise plagiarized the work of other students and/or persons.
<Reijan Ice C. Magtangob>, DLSU ID# <12506540>
**********************************************************************
*****/

int getRandom(int min, int max)
{
    int randNo;
    randNo = (rand()%(max-min+1)+min);
    return randNo;
}

/*============================================================================================================================================================================*/

void BondDamian(int *ap, int *damianBP, int peLevel )
{
	if (*ap > 0)
	{
		*ap = *ap - 1;

		int chance;
		chance = getRandom(1, 100);

		if(peLevel==1)
		{
			printf ("Did not Bond with Damian! (PE Level too low!)\n");
		}
		else if(peLevel==2)
		{
			if(chance>75)
			{
			*damianBP = *damianBP + 1;
			printf("Bonded with Damian! Damian's BP is now %d.\n", *damianBP);
			}
			else
			printf ("Did not Bond with Damian!\n");
		}
		else if (peLevel==3)
		{
			if(chance>50)
			{
			*damianBP = *damianBP + 1;
			printf("Bonded with Damian! Damian's BP is now %d.\n", *damianBP);
			}
			else
			printf("Did not Bond with Damian!\n");
		}
		else if (peLevel==4)
		{
			if (chance>25)
			{
			*damianBP = *damianBP + 1;
			printf("Bonded with Damian! Damian's BP is now %d.\n", *damianBP);
			}
			else
			printf("Did not Bond with Damian!\n");
		}
	}
	else
	printf("No AP left to bond with Damian.\n");
	system("pause");
}

void BondBecky(int *ap, int *beckyBP)
{
	int chance;
	chance = getRandom(1, 100);
	if (*ap > 0)
	{
    *ap = *ap - 1;
		if (chance>25)
		{
		*beckyBP = *beckyBP + 1;
			printf("Bonded with Becky! Becky's BP is now %d.\n", *beckyBP);
		}
		else
			printf("Did not Bond with Becky!\n");
	}
	else
		printf("No AP left to bond with Becky.\n");
	system("pause");

}
void BondHenderson(int *ap, int *hendersonBP, int mathLevel)
{
	int chance;
	chance = getRandom(1,100);
	if (*ap > 0)
	{
		*ap = *ap - 1;
		if(mathLevel==1)
		{
			printf ("Did not Bond with Mr. Henderson! (Math Level too low!)\n");
		}
		else if (mathLevel==2)
		{
			if(chance>50)
			{
			*hendersonBP = *hendersonBP + 1;
			printf("Bonded with Mr. Henderson! Mr. Henderson's BP is now %d.\n", *hendersonBP);
			}
			else
			{
			printf ("Did not Bond with Mr. Henderson!\n");
			}
		}
		else if (mathLevel==3)
		{
			if(chance>75)
			{
			*hendersonBP = *hendersonBP + 1;
			printf("Bonded with Mr. Henderson! Mr. Henderson's BP is now %d.\n", *hendersonBP);
			}
			else
			{
			printf("Did not Bond with Mr. Henderson!\n");
			}
		}
		else  if (mathLevel==4)
		{
			if (chance>0)
			{
			*hendersonBP = *hendersonBP + 1;
			printf("Bonded with Mr. Henderson! Mr. Henderson's BP is now %d.\n", *hendersonBP);
			}
		}
	}
	else
		printf("No AP left to bond with Mr. Henderson.\n");
	system("pause");
}

void BondwBond(int *ap, int *bondBP)
{
    if (*ap > 0)
    {
	*ap = *ap - 1;
	*bondBP = *bondBP + 1;
        printf("Bonded with Bond! Bond BP is now %d.\n", *bondBP);
    }
    else
        printf("No AP left to bond with Bond.\n");

    system("pause");
}

/*============================================================================================================================================================================*/


void checkPEifLevelUp(int *peEXP, int *peLevel) //Checks the PE Level, decides whether to level up or not
{
    int required;

    if (*peLevel == 1)
        required = 5; //numQuestions
    else if (*mathLevel == 2)
        required = 10; //numQuestions
    else if (*mathLevel == 3)
        required = 15; //numQuestions
    else
        return; /* MAX */
    if (*peLevel >= required)
	{
        *peLevel = *peLevel + 1;
        *peEXP = 0;
        printf("LEVEL UP! PE Level is now %d!\n", *peLevel);
    }
}

void updatepeEXP(int correct, int total, int *peEXP, int peLevel)
{
/*mathEXP = 1*/
    if (peLevel >= 4)
        return;   /* MAX level */
	else
	{
    int percent = correct * 100 / total;

    	if (percent == 60)
        	peEXP = *peEXP + 1;
    	else if (percent == 80)
        	*peEXP = *peEXP + 2;
    	else if (percent == 100)
		{
        	*peEXP = *peEXP + 3;

			int roll = getRandom(1, 100)
				if (roll <=50)
				{
					*ap = *ap + 1;
					printf("BONUS! +1 AP gained!\n")
				}
		}
	}
}

void trainPE(int *ap, int* peLevel, int* peEXP)
{
/*
	int mathLevel=1;
	int mathEXP=0;
*/
	*ap = *ap - 1;
    int numQuestions;
    int correct = 0;
    int i = 1;
    int a, userInput;

    /* Number of questions */
    if (*mathLevel == 1)
        numQuestions = 5;
    else if (*mathLevel == 2)
        numQuestions = 10;
	else if (*mathLevel == 3)
		numQuestions = 15;
	else
		numQuestions = 15;

	while (i <= numQuestions)
    {
        /* CLEAR SCREEN FOR EACH QUESTION */
        system("cls");
        printf("Minigame: Train Physical Activity with Yor!\n\n");
        printf("Current PE Level: Level %d\n\n", *peLevel);
        /* Generate question */
        if (*peLevel==1)
        	{
            a = getRandom(1, 4);
			switch(a)
        	}
        else if (*mathLevel==2)
        	{
            a = getRandom(1, 8);
			}
        else
        	{   /* Level 3 or MAX */
			a = getRandom(1, 16);
			}
		printf("Yor: Anya-san,                               Prompt #%d of %d\n", a, i, numQuestions);
		switch(a)
		{
			case 1:
			printf("Up!\n");
			break;
			case 2:
			printf("Down!\n");
			break;
			case 3:
			printf("Left!\n");
			break;
			case 4:
			printf("Right!\n");
			break;
			case 5:
			printf("UP AHEAD!\n");
			break;
			case 6:
			printf("BEHIND YOU!\n");
			break;
			case 7:
			printf("TO THE LEFT!\n");
			break;
			case 8:
			printf("TO THE RIGHT!\n");
			break;
			case 9:
			printf("North!\n");
			break;
			case 10:
			printf("South!\n");
			break;
			case 11:
			printf("East!\n");
			break;
			case 12:
			printf("West!\n");
			break;
			case 13:
			printf("Northwest!\n");
			break;
			case 14:
			printf("Northeast!\n");
			break;
			case 15:
			printf("Southwest!\n");
			break;
			case 16:
			printf("Southeast!\n");
			break;

    	printf("Anya: Anya goes...\n\n");
    	printf("(Action): ");
		scanf("%c\n",&userInput)

		if(*peLevel==1)
			switch(userInput)
			{
				case '1':
				userInput=('w'||'W')
				break;
				case '2':
				userInput=('s'||'S')
				break;
				case '3':
				userInput=('a'||'A')
				break;
				case '4':
				userInput=('d'||'D')
				break;
			}

		else if(*peLevel==2)
			switch(userInput)
			{
				case '1':
				userInput=('w'||'W')
				break;
				case '2':
				userInput=('s'||'S')
				break;
				case '3':
				userInput=('a'||'A')
				break;
				case '4':
				userInput=('d'||'D')
				break;
				case '9':
				userInput='8'
				break;
				case '10':
				userInput='2'
				break;
				case '11':
				userInput='6'
				break;
				case '12':
				userInput='4'
			}
		else if(*peLevel==2)
			switch(userInput)
			{
				case '1':
				userInput='w'
				break;
				case '2':
				userInput='s'
				break;
				case '3':
				userInput='a'
				break;
				case '4':
				userInput='d'
				break;
				case '5':
				userInput='W'
				break;
				case '6':
				userInput='S'
				break;
				case '7':
				userInput='A'
				break;
				case '8':
				userInput='D'
				break;
				case '9'
				userInput='8'
				break;
				case '10':
				userInput='2'
				break;
				case '11':
				userInput='6'
				break;
				case '12':
				userInput='4'
				break;
				case '13':
				userInput='7'
				break;
				case '14':
				userInput='9'
				break;
				case '15':
				userInput='1'
				break;
				case '16':
				userInput='3'
			}

		}
		if(userInput==a)
			printf("Good job Anya!\n");
			correct++;

    	else
   		printf("That was incorrect, Anya. Let's try another one!");
    	printf("\n");
   		system("pause");
	}

}

void checkMathifLevelUp(int *mathEXP, int *mathLevel) //Checks the Math Level, decides whether to level up or not
{
    int required;

    if (*mathLevel == 1)
        required = 5; //numQuestions
    else if (*mathLevel == 2)
        required = 10; //numQuestions
    else if (*mathLevel == 3)
        required = 15; //numQuestions
    else
        return; /* MAX */
    if (*mathEXP >= required)
	{
        *mathLevel = *mathLevel + 1;
        *mathEXP = 0;
        printf("LEVEL UP! Math Level is now %d!\n", *mathLevel);
    }
}

void updateMathEXP(int correct, int total, int *ap, int *mathEXP, int mathLevel)
{
/*mathEXP = 1*/
    if (mathLevel >= 4)
        return;   /* MAX level */
	else
	{
    	int percent = correct * 100 / total;

    	if (percent == 60)
        *mathEXP = *mathEXP + 1;
   		else if (percent == 80)
        *mathEXP = *mathEXP + 2;
   		else if (percent == 100)
		{
        	*mathEXP = *mathEXP + 3;

			int roll = getRandom(1, 100);
				if (roll <50)
				{
					*ap = *ap + 1;
						printf("BONUS! +1 AP gained!\n");
				}
		}
	}
}

void studyMath(int *ap, int *mathLevel, int *mathEXP)
{
/*
	int mathLevel=1;
	int mathEXP=0;
*/
	*ap = *ap - 1;
    int numQuestions;
    int correct = 0;
    int i = 1;
    int a, b, opType, answer, userAns;

    /* Number of questions */
    if (*mathLevel == 1)
        numQuestions = 5;
    else if (*mathLevel == 2)
        numQuestions = 10;
	else if (*mathLevel == 3)
		numQuestions = 15;
	else
		numQuestions = 15;

    while (i <= numQuestions)
    {
        /* CLEAR SCREEN FOR EACH QUESTION */
        system("cls");

        printf("Minigame: Studying with Loid!\n\n");
        printf("Current Math Level: Level %d\n\n", *mathLevel);
        /* Generate question */
        if (*mathLevel==1)
        {
            a = getRandom(1, 999);
            b = getRandom(1, 999);
            opType = getRandom(1, 2);
        }
        else if (*mathLevel==2)
        {
            opType = getRandom(1, 3);

            if (opType==3)
            {
                a = getRandom(1, 20);
                b = getRandom(1, 20);
            }
            else
            {
                a = getRandom(1, 9999);
                b = getRandom(1, 9999);
            }
        }
        else
        {   /* Level 3 or MAX */
            opType = getRandom(1, 3);

            if (opType == 3)
            {
                a = getRandom(1, 50);
                b = getRandom(1, 50);
            }
            else
            {
                a = getRandom(1, 9999);
                b = getRandom(1, 9999);
            }
        }
        /* Solve */
        if (opType == 1)
            answer = a + b;
        else if (opType == 2)
            answer = a - b;
        else
            answer = a * b;
        /* DISPLAY UI */
        printf("Loid: Anya, what is %d ", a);

        if (opType == 1)
            printf("+");
        else if (opType == 2)
            printf("-");
        else
            printf("*");

        printf(" %d?                       Question #%d of %d\n",b ,i ,numQuestions);
        printf("Anya: Ummm...\n");
        printf("\n");
        printf("(Answer) : ");
        scanf("%d", &userAns);

        if (userAns == answer)
            correct++;
        i++;
    }

    /* DONE: clear screen */
    system("cls");
    printf("Minigame: Studying with Loid!\n");
    printf("\n");

	if(correct*100/numQuestions <= 60)
	{
	printf("Loid: Good work, Anya! You could do better next time..\n");
    printf("Anya: Anya smart! Anya will ty again better! Waku waku!!!!!\n\n");
	}
	else if(correct*100/numQuestions <= 80)
	{
    printf("Loid: Excellent work, Anya! You could do better next time.\n");
    printf("Anya smart! Anya getting good! Waku waku!!!!!\n");
	}
	else if(correct*100/numQuestions == 100)
	{
	printf("Loid: Excellent work, Anya! You got a perfect score!.\n");
    printf("Anya: Anya smartest! Anya the best! Waku waku!!!!!\n\n");
	}
    printf("\n\n");
    printf("Game Complete!\n");
    printf("Total Score: %d / %d\n", correct, numQuestions);

	/*Gained EXP*/
	updateMathEXP(correct, numQuestions, ap, mathEXP, *mathLevel);
	printf("EXP Gained: %d /  EXP\n", *mathEXP);
    /* EXP Gain and Leveling */
    printf("Current EXP: %d\n", *mathEXP);

    checkMathifLevelUp(mathEXP, mathLevel);

    /* AP Bonus */
    if (correct == numQuestions)

    printf("\nPress ENTER to continue...");
    getchar(); getchar();
}

/*============================================================================================================================================================================*/

void DayMorning(int *day, int *daysTillOuting, int *nextVenue, int *ap, int *damianBP, int *beckyBP, int *hendersonBP, int *bondBP, int mathLevel, int peLevel)
{
	int choice;
	int exitMenu = 0;

	do
    {
		do // Inner loop
		{
			system("cls");
			printf("Day #%d!                                          Days Till Next Outing: %d\n",*day,*daysTillOuting); //%d\n",day, *daysTillOuting//
			printf("Morning                                           Next Outing Venue: ");
			//venue name based code//
			printf("\n\n");
			printf("Venue: Eden Academy                               AP Remaining: %d\n",*ap /*%d"*/);
			printf("\n");
			printf("[1] Bond with Damian\n");
			printf("[2] Bond with Becky\n");
			printf("[3] Bond with Mr. Henderson                       [S]tats\n");
			printf("[4] Proceed Home\n");
			printf("\n\n");

			printf ("Your choice: ");
			scanf ("%d",&choice);

		} while(!(choice >= 1 && choice <= 4));

			if (choice==1)
			{
				BondDamian(ap,damianBP,peLevel);
			}
			else if (choice==2)
			{
				BondBecky(ap,beckyBP);
			}
			else if (choice==3)
			{
				BondHenderson(ap,hendersonBP,mathLevel);
			}
			else if (choice==4)
			{
				printf("Walking Home...\n");
				system("pause");
				exitMenu=1;
			}

			switch(choice)
				case 1:
				printf("ShowStatscode\n");
				//ShowStats(...);//
				system("pause");
				break;
	}while(!exitMenu);
}

/*============================================================================================================================================================================*/

void DayAfternoon(int *day, int *daysTillOuting, int *ap, int *bondBP, int *mathLevel, int *mathEXP, int *peLevel, int *peEXP)
{
	int exitMenu = 0;
	int valid = 0;
	int choice;

	do
	{
		do
		{
			system("cls");
			printf("Day #%d!                                          Days Till Next Outing: %d\n",*day,*daysTillOuting); //%d\n",day, *daysTillOuting//
			printf("Afternoon                                         Next Outing Venue: \n");
			printf("\n");
			printf("Venue: 128 Park Avenue, West Berlint              AP Remaining: %d\n",*ap /*%d"*/);
			printf("\n");
			printf("[1] Study Math with Loid\n");
			printf("[2] Train Physical Education with Yor\n");
			printf("[3] Play with Bond\n");
			printf("[4] Slack Off\n");
			printf("\n\n");

			printf ("Your choice: ");
			scanf ("%d",&choice);

		} while(!(choice >= 1 && choice <= 4));

			if (choice==1)
			{
				if (*ap > 0)
				{
					(*ap)--;
					studyMath(ap,mathLevel,mathEXP);
					exitMenu = 1;
				}
				else
				{
					printf("You have no AP left!\n");
					system("pause");
					exitMenu = 1;
				};
			}
			else if (choice==2)
			{
				if (*ap > 0)
				{
					(*ap)--;
					printf("TrainPEcode\n");
					//trainPE(ap,peLevel,peEXP)//
					exitMenu = 1;
				}
				else
				{
					printf("You have no AP left!\n");
					system("pause");
					exitMenu = 1;
				}
			}
			else if (choice==3)
			{
				if (*ap > 0)
				{
					BondwBond(ap,bondBP);
					exitMenu = 1;
				}
				else
				{
					printf("You have no AP left!\n");
					system("pause");
					exitMenu = 1;
				}
			}
			else if (choice==4)
			{
				printf("Walking home...\n");
				if (*ap < 3)
					(*ap)++;//================================================//
				exitMenu=1;
			}
		system("pause");
	}while(!exitMenu);
}


void GameStartLoop(int firstVenue)
{
    // initialize stats
    int day = 1;
    int ap = 3;
    int nextVenue = firstVenue;
    int daysTillOuting = 3;
    int outingsAttended = 0;

	int damianBP = 0, beckyBP = 0, hendersonBP = 0, bondBP = 0;
	int mathLevel = 1, mathEXP = 0;
	int peLevel = 1, peEXP = 0;

   while (day <= 40)
   {

        if (day % 4 != 0)
		{          // regular school day (1,2,3)
			int cycleDay = day % 4;
            if (cycleDay != 3)
				{
                	ap = ap + 1;
					if (ap > 3)
					ap = 3;      // regain AP except Day 3 of cycle
				}
            DayMorning(&day, &daysTillOuting, &nextVenue, &ap,&damianBP, &beckyBP, &hendersonBP, &bondBP, mathLevel, peLevel);
            DayAfternoon(&day, &daysTillOuting, &ap, &bondBP, &mathLevel, &mathEXP, &peLevel, &peEXP);

			day++;
            daysTillOuting--;
		}
        else
		{                     // OUTING DAY (day%4==0)
            /*OutingPreparation(nextVenue);
            PhotoMinigame(nextVenue,&photoRating[nextVenue],&bestAngle[nextVenue],&ap);
            outingsAttended++

            nextVenue = FamilyMeetingChooseNextVenue(damianBP, beckyBP, hendersonBP, bondBP);
            nextVenue =*/

            if (ap < 3)
                ap = 3;

            day++;
            daysTillOuting = 3;
        }
    }
	if (day > 40)
	printf("ty playing!\n");

	    // Determine Ending after 40 days
	printf("ShowStatscode\n");
	//ShowEnding(...);//
}
void GameStart(int *GStart)
{
    int exit=0;
	int choice;
	int nVal;
    do
    {
		do // Inner loop
		{
			system("cls");
			printf("Day #0!\n");
            printf("Evening\n");
			printf("\n");
		    printf("Venue: 128 Park Avenue, West Berlint\n");
            printf("\n");
            printf("FAMILY MEETING!\n");
            printf("\n");
            printf("Loid: So, where should our next outing be?\n");
            printf("Yor: Anya-san should decide, Loid.\n");
            printf("Anya: Anya wants to go...\n");
            printf("\n");
			printf("[1] Park \n");
            printf("[2] City Mall\n");
            printf("[3] Ostania Beach\n");
            printf("[X] west Berlint Aquarium - LOCKED\n");
            printf("[X] Ostania Art Museum    - LOCKED\n");
			printf("[X] Berlint Mouseney Land - LOCKED\n");
            printf("[X] Park Avenue Dogland   - LOCKED\n");
            printf("\n");
            printf("\n");
			printf("Your choice: ");
			scanf ("%d",&choice);
			// Valid input: nChoice >= 1 && nChoice <= 4
			// True condition for invalid inputs: !(nChoice >= 1 && nChoice <= 4)
		} while	(!(choice >= 1 && choice <=3));

		if (choice == 1)
			*GStart = 1;
		else if (choice == 2)
			*GStart = 2;
		else if (choice == 3)
			*GStart = 3;

		exit=1;

		system("pause");

	} while(!exit);
}

void GameRules(){

    system("cls");

    printf("GAMEPLAY PREMISE\n");
	printf("\n");
    printf("At the beginning of the game, Anya is given an assignment by her adviser Mr. Henderson, who\n");
    printf("informs Anya that she has an assignment that requires her to create a photo collage of memories\n");
    printf("spent with peers, which should properly demonstrate the ""elegance"" of Eden Academy's students\n");
    printf("in and around their respective communities. Anya is also reminded of an upcoming set of\n");
    printf("assessments for students that will properly asses their mathematical and physical skills, of which\n");
    printf("the best overall performing students in both the assessments and the project will be given a ""Stella Star"".\n");
    printf("\n");
    printf("Anya will have exactly 40 days to accomplish all of these tasks, which are to prepare and study\n");
    printf("for the Math and Physical Assessments by being tutored by her parents Loid Forger, and Yor\n");
    printf("Forger respectively. At the same time, she'll have to plan outings (called ""Ootings"" by Anya) and\n");
    printf("spend time with her family while bonding with her peers during school days.\n\n");
    printf("\n\n");
    printf("GAMEPLAY OBJECTIVES\n");
	printf("\n");
    printf("Within the span of 40 days, players must use their time wisely in helping Anya bond with her peers\n");
    printf("while studying for Math and training for her Physical Education assessments. While studying, she\n");
    printf("should bond with her peers to properly unlock places where she can have her outings. During her\n");
    printf("outings, players should guide her to take the ""Perfect Photo"" that she can add to her photo collage.\n\n");
    printf("***********************************************************************************************************************\n");

    system("pause");

}

void MenuStart(int *GRules, int *GStart)
{
	/* This function shows the title of the game and serves as a menu starter
		option 1 = Start the game // starts the minigame
		option 2 = Rules of the game // shows the premise of the game
		option 3 = Leave // quits
	*/

	int result = 0; // The boolean integer flag for the outer loop
	int choice; // Variable used for user input
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
			printf("|                                                            The Minigame!                                                           |\n");
			printf("╰------------------------------------------------------------------------------------------------------------------------------------╯\n");
			printf ("\n");
			printf ("[1] - Game Start!\n");
			printf ("[2] - Rules of the game\n");
			printf ("[3] - Leave!\n");
			printf ("\n");
			printf ("Your choice: ");
			scanf ("%d",&choice);

			// Valid inputs: 1, 2, 3, and 4
			// Valid input condition: nChoice >= 1 && nChoice <= 4
			// invalid input true condition: !(Valid input condition)
			//								: !(nChoice >= 1 && nChoice <= 4)
			//								: nChoice < 1 || nChoice > 4
		} while (!(choice >= 1 && choice <= 3)); // To derive the "invalid input true condition", determine the condition
					// where the input is valid. Afterwards, simply put a ! unary operator
					// before it

		/* UI operations / options through a switch or if else is now done here */

		if(choice==1)
            {
            GameStart(GStart);
			GameStartLoop(*GStart);
            }
		else if (choice==2)
			{
            GameRules();
			}
		else if (choice==3)
			{
			result=1;
            system("pause");
			}

	} while(!result);
}

int main()
{
	srand(time(0));
	int ap = 2;
	int mathLevel=1;
	int mathEXP=0;
    int GRules=0;
    int GStart=0;

	MenuStart(&GRules,&GStart);

	return 0;
}
