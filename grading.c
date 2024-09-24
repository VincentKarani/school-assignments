#include <stdio.h>
#include <stdlib.h>

int main()
{
    float math, physics, computer, average;

    printf("Enter the Mathematics score: ");
    scanf("%f", &math);

    printf("Enter the Physics score: ");
    scanf("%f", &physics);

    printf("Enter the Computer score: ");
    scanf("%f", &computer);

    average = (math + physics + computer) / 3.0;

    if(average >= 70 && average <= 100){
        printf("The grade is A \n");
    }
    else if(average >=60 && average < 70){
        printf("The grade is B \n");
    }
    else if(average >= 50 && average < 60 ){
        printf("The grade is C \n");
    }
    else if(average >= 40 && average < 50 ){
        printf("The grade is D \n");
    }
    else if(average >= 0 && average < 40 ){
        printf("The grade is E(Fail) \n");
    }
    else {
        printf("Wrong input \n");
    }


    return 0;
}
