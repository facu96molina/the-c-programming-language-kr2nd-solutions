#include <stdio.h>
/* 
    Write a program to count blanks, tabs, and newlines.
*/
int main()
{
    int c, nb, nt, nl;

    nb = nt = nl = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    
    printf("Number of blanks = %d\n", nb);
    printf("Number of tabs = %d\n", nt);
    printf("Number of lines = %d\n", nl);
}