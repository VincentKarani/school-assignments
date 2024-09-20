#include <stdio.h>
#include <stdlib.h>

//This program calculates the Simple Interest

int main()
{
    float principle, rate, time, simple_interest;// these are the variables standing for principleAmount, rate, time and simple interest r

    printf("Enter the Principle Amount: ");
    scanf("%f", &principle);

    printf("Enter the time: ");
    scanf("%f", &time);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    simple_interest = (principle * time * rate)/100;

    printf("The Simple Interest is Kes %.0f", simple_interest);

    return 0;
}
