#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*This program takes in a number of terms from a user and displays each number inside the number of terms as well as its cube*/
int main()
{
    int number, cube, n;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    n = 1;
    while (n<=number){
        cube = pow(n, 3);
        printf("The number is: %d and the cube is: %d\n", n, cube);
        n += 1;
    }


    return 0;
}
