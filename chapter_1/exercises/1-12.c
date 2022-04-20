#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/*
    Write a program that prints its input one word per line.
*/
int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                state = OUT;
                printf("\n");
            }
        } else {
            if (state == OUT)
                state = IN;
            putchar(c);
        }
    }
}