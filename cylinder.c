#include <stdio.h>
#include <stdlib.h>
//This system calculates both the volume and surface area of a cylinder
int main()
{
    float pi, radius, height, surface_area, volume;//declaring variables

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    pi = 22.0/7.0;

    volume = pi*radius*radius*height;
    surface_area = (2*pi*radius*radius) + (2*pi*radius*height);

    printf("The Volume of the cylinder is %.2f. \nThe Surface area of the cylinder is %.2f \n", volume, surface_area);

    return 0;
}
