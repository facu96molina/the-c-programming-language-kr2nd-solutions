#include <stdio.h>
#define MAX_LENGTH 20
#define IN 1
#define OUT 0
/*
    Write a program to print a histogram of the lengths of words
    in its input. It is easy to draw the histogram with the bars horizontal;
    a vertical orientation is more challenging.
*/

int getLocalMaximum(int lengths[], int size);

int main()
{
    int c, length, lengths[MAX_LENGTH+1];

    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        lengths[i] = 0;
    }
    
    length = 0;
    int state = OUT;

    // Get input from user, calculate lengths of words and store them in their corresponding index
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                state = OUT;
                if (length >= MAX_LENGTH)
                {
                    ++lengths[MAX_LENGTH];
                }
                else
                {
                    ++lengths[length];
                }                
                length = 0;
            }
        }
        else {
            if (state == OUT)
            {
                state = IN;
            }
            ++length;
        }
    }

    // Horizontal histogram
    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        printf("[%d]: ", i);
        
        length = lengths[i];
        while(length)
        {
            printf(" *");
            --length;
        }
        printf("\n");        
    }

    printf("\n\n");

    // Vertical histogram
    int localMaximum = -1;
    while ((localMaximum = getLocalMaximum(lengths, MAX_LENGTH)) != 0)
    {
        for (int i = 1; i <= MAX_LENGTH; ++i)
        {
            if (lengths[i] == localMaximum)
            {
                printf(" *  ");
                --lengths[i];
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        printf("[%02d]", i);
    }
    printf("\n");

}

/**
 * In order to print the histogram from top to bottom,
 * we get each level's maximum.
 */
int getLocalMaximum(int lengths[], int size)
{
    int max = 0;
    for (int i = 1; i <= size; ++i)
    {
        if (lengths[i] > max)
        {
            max = lengths[i];
        }
    }

    return max;
}