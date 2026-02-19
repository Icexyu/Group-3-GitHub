#include <stdio.h>

float convertCupToPINT (float fCups)
{
    return (fCups/2);
}

float convertCupToTBSP (float fCups)
{
    return (fCups*16);
}

float convertCupToTSP (float fCups)
{
    return (fCups*48);
}

void displayConversions(float fCups)
 {

    float Pints = convertCupToPINT(fCups);
    float TBSP = convertCupToTBSP(fCups);
    float TSP = convertCupToTSP(fCups);

    printf ("Pints %.2f\n", Pints);
    printf ("TBSP %.2f\n", TBSP);
    printf ("TSP %.2f\n", TSP);
}

int main()
{
   float fCups;

   printf("Enter No. of Cups: ");
   scanf("%f", &fCups);

   displayConversions(fCups);

   return 0;
}
