#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
int lower(int c);

/* Sets a string to lowercase by converting each character from the string 
    to lower case for the ASCII character set. */
int main(void){
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


/* lower: convert c to lower case; ASCII only */
int lower(int c){
    if (c >= 'A' & c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}