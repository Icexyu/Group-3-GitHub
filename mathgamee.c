#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getRandom(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

void updateMathEXP(int correct, int total, int *mathEXP, int mathLevel)
{
    if (mathLevel >= 4)
        return;   /* MAX level */

    int percent = correct * 100 / total;

    if (percent == 100)
        *mathEXP = *mathEXP + 3;
    else if (percent >= 80)
        *mathEXP = *mathEXP + 2;
    else if (percent >= 60)
        *mathEXP = *mathEXP + 1;
}

void checkMathLevelUp(int *mathEXP, int *mathLevel)
{

    int required;

    if (*mathLevel == 1)
        required = 5;
    else if (*mathLevel == 2)
        required = 10;
    else if (*mathLevel == 3)
        required = 15;
    else
        return; /* MAX */

    if (*mathEXP >= required) {
        *mathLevel = *mathLevel + 1;
        *mathEXP = 0;
        printf("LEVEL UP! Math Level is now %d!\n", *mathLevel);
    }
}

void applyMathBonusAP(int *ap, int mathLevel)
{

    int roll = getRandom(1, 100);

    if (mathLevel < 4) {
        if (roll <= 50) {
            *ap = *ap + 1;
            printf("BONUS! +1 AP gained!\n");
        }
    } else {
        if (roll <= 60) {
            *ap = *ap + 2;
            printf("BONUS! +2 AP gained!\n");
        }
    }
}

void studyMath(int *ap, int *mathLevel, int *mathEXP) {

    int numQuestions;
    int correct = 0;
    int i = 1;
    int a, b, opType, answer, userAns;

    /* AP cost */
    *ap = *ap - 1;

    /* Number of questions */
    if (*mathLevel == 1)
        numQuestions = 5;
    else
        numQuestions = 10;

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

        printf(" %d?                       Question %d of %d\n", b, i, numQuestions);
        printf("Anya: Ummm...\n");
        printf("\n");
        printf("Answer: ");
        scanf("%d", &userAns);

        if (userAns == answer)
            correct++;
        i++;
    }

    /* DONE: clear screen */
    system("cls");

    printf("Minigame: Studying with Loid!\n");
    printf("\n");
    printf("Loid: Excellent work, Anya! You could do better next time.")
    printf("Anya smart! Anya getting good! Waku waku!!!!!\n");
    printf("\n\n");
    printf("Game Complete!\n")
    printf("Total Score: %d / %d\n", correct, numQuestions);

    /* EXP and Leveling */
    updateMathEXP(correct, numQuestions, mathEXP, *mathLevel);
    printf("Current EXP: %d\n", *mathEXP);

    checkMathLevelUp(mathEXP, mathLevel);

    /* AP Bonus */
    if (correct == numQuestions)
        applyMathBonusAP(ap, *mathLevel);

    printf("\nPress ENTER to continue...");
    getchar(); getchar();
}

int main() {

    srand(time(0));   /* Random seed */

    int ap = 5;        /* Give enough AP to test */
    int mathLevel = 1;
    int mathEXP = 0;

    printf("===== TEST: Math Minigame =====\n");
    printf("AP: %d | Math Level: %d | Math EXP: %d\n\n", ap, mathLevel, mathEXP);

    /* Call the math minigame */
    studyMath(&ap, &mathLevel, &mathEXP);

    /* After minigame results */
    printf("\n===== After Minigame =====\n");
    printf("AP: %d\n", ap);
    printf("Math Level: %d\n", mathLevel);
    printf("Math EXP: %d\n", mathEXP);

    return 0;
}
