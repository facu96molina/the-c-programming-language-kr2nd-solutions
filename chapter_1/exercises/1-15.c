#include <stdio.h>

/*
    Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
*/

float fahr2celsius(float fahr);


int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table*/
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper){
        printf("%3.0f %6.1f\n", fahr, fahr2celsius(fahr));
        fahr = fahr + step;   
    }
}

/**
 * @brief Convert temperature value from fahrenheit to celsius.
 * 
 * @param fahr: temperature in fahrenheit
 * @return float: temperature in celsius
 */
float fahr2celsius(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}