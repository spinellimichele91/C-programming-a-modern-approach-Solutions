/* Write a C program that accepts an employee's ID,
total worked hours of a month and the amount he received per hour.
Print the employee's ID and salary (with two decimal places) of a particular month   */

#include <stdio.h>



int main()
{
    int radius;
    printf("\nEnter radius of the sphere: ");
    scanf("%d", &radius);
    int radius_squared = radius * radius * radius;
    printf("Radius: %d meters\n", radius);

    float volume = 4.0 / 3.0 * 3.14 * radius_squared;
    printf("Volume of the sphere: %.2f cubic meters\n\n", volume);

    return(0);
}
