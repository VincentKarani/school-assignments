#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float principle, rate, time, amount, compound_interest;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    amount = principle * pow((1.0+(rate/100.0)), time);
    compound_interest = amount - principle;

    printf("The Compound Interest is %.2f", compound_interest);
    return 0;
}
