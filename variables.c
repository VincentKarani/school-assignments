// Learning variables in C
#include <stdio.h> //contains two built-in functions scanf(), printf()
#include <stdlib.h>

int main()
{
    //declaration and initialization
    char a;
    char name[] = {};
    int age;
    float area;
    double salary;

    printf("Enter a character: ");
    scanf("%c", &a);
    printf("The character is %c \n", a);

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("The name is %s \n", name);

    printf("Enter your age: ");
    scanf("%2d", &age);
    printf("The age is %d \n", age);

    printf("Enter the area: ");
    scanf("%f", &area);
    printf("The area is %.1f \n", area);

    printf("Enter your salary: ");
    scanf("%lf", &salary);
    printf("The salary is %.2lf \n", salary);

    return 0;

}
