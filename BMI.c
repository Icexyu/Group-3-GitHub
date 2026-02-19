#include <stdio.h>

int main()
{

    float fPounds, fFoot, fInches;
    float fWeight, fHeight, fMeters1, fMeters2;
    float fBMI;

    printf("What is your weight in Pounds?: ");
    scanf("%f", &fPounds);
    printf("What is your height in Feet?: ");
    scanf("%f", &fFoot);
    printf("What is your height in Inches?: ");
    scanf("%f", &fInches);

    fMeters1 = fFoot * 0.3048;
    fMeters2 = fInches * (0.3048 / 12);
    fHeight = fMeters1 + fMeters2;
    fWeight = fPounds * 0.4535;

    fBMI = (fWeight / (fHeight*fHeight));




    if(fBMI < 18.5)
        printf("You are Underweight %.3f", fBMI);
    else if(fBMI > 25.0)
        printf("You are Overweight %.3f", fBMI);
    else
        printf("You are Normal %.3f", fBMI);

return 0;
}
