#include <stdio.h>
/*
    Write a program to print the corresponding Celsius to Fahrenheit table.
*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table*/
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    // Heading
    printf(" °C\t°F\n");
    printf("-----------\n");

    celsius = lower;
    while (celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}