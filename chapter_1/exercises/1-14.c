#include <stdio.h>
#define FIRST_PRINTABLE_CHAR ' '
#define LAST_PRINTABLE_CHAR '~'
#define PRINTABLE_CHARS LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1

/*
    Write a program to print a histogram of the frequencies of different characters in its input.
*/

int main()
{
    int c, chars[PRINTABLE_CHARS], length;

    for (int i = 0; i < PRINTABLE_CHARS; ++i)
    {
        chars[i] = 0;
    }

    // Store each character entered in the corresponding index
    while ((c = getchar()) != EOF)
    {
        if (c >= FIRST_PRINTABLE_CHAR && c <= LAST_PRINTABLE_CHAR)
        {
            ++chars[c - FIRST_PRINTABLE_CHAR];
        }
    }
        
    // Horizontal histogram
    for (int i = 0; i < PRINTABLE_CHARS; ++i)
    {
        printf("[%c]: ", FIRST_PRINTABLE_CHAR + i);
        
        length = chars[i];
        while(length)
        {
            printf(" *");
            --length;
        }
        printf("\n");        
    }
    printf("\n");
}