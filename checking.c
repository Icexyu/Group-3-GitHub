#include <stdio.h>

float computeOrigContribution(float famount, int nfriendCount)
{

    return (nfriendCount / famount);
}

float computeAddedContribution(int nfriendCount, float famount, int nbackOut)
{

	return (famount / (nfriendCount - nbackOut) - famount / nfriendCount);
}

float computeNewContribution(float forigCont, float fadded)
{

    return (forigCont + fadded);
}

void dislplayBreakdown(int nfriendCount, int nbackOut, float famount, float forigCont, float fadded)
{
    float fcomputeOrigContribution(famount, nfriendCount);
    float fcomputerAddedContribution(nfriendCount, famount, nbackOut);
    float fcomputeNewContribution(forigCont, fadded);

    printf("Original Contribution per person: %.2f\n", fcomputeOrigContribution);
    printf("Added Contribution per person: %.2f\n", fcomputerAddedContribution);
    printf("New Contribution per person: %.2f\n", fcomputeNewContribution);
}

int main()
{
    int nfriendCount, nbackOut;
    float famount, forigCont;
    float fadded;

	printf("Enter no. of people in the group: ");
    scanf("%d", &nfriendCount);
	printf("Enter total cost of the present: ");
    scanf("%f", &amount);
	printf("Number of people backing out: ");
    scanf("%d", &nbackOut);

    forigCont = computeOrigContribution(famount, nfriendCount);
    fadded = computeAddedContribution(nfriendCount, famount, nbackOut);

    displayBreakdown(int nfriendCount, int nbackOut, float famount, float forigCont, float fadded)

	return 0;
}
