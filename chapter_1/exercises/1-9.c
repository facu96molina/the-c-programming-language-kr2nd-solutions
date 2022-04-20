#include <stdio.h>
#define IN  1
#define OUT 0
/*
    Write a program to copy its input to its output, replacing each
    string of one or more blanks by a single blank.
*/
int main()
{
    int c, state;
    state = OUT;
    while((c = getchar()) != EOF)
    {
        if (c == ' '){
            if (state == IN){
                state = OUT;
                putchar(c);
            }
        } else {
            putchar(c);
            if (state == OUT){
                state = IN;
            }
        }
    }
}