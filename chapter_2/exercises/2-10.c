#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */
#define UPPER_LOWER_DIFF ('a' - 'A');

int getLine(char line[], int maxline);
int lower(int c);

/* Rewrite the function lower, which converts upper case letters to lower case, with a conditional
   expression instead of if-else */
int main(void) {
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while((len = getLine(line, MAXLINE)) > 0)
        printf("%s", line);

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = lower(c);
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int lower(int c)
{
    return c >= 'a' && c <= 'z' ? c : c + UPPER_LOWER_DIFF;
}