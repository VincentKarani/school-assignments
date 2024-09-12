#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, w, area;

    printf("Please input the length of the rectangle \n");
    scanf("%d", &l);

    printf("Please input the width of the rectangle \n");
    scanf("%d", &w);

    area = l * w;

    printf("The area of the rectangle is %d \n", area);
    return 0;
}
