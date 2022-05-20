#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
void removeTrailingBlanksAndTabs(char line[], int len);

/* 
    Write a program to remove trailing blanks and tabs from each line of input, and
    to delete entirely blank lines.
*/
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while((len = getLine(line, MAXLINE)) > 0){
        removeTrailingBlanksAndTabs(line, len);
        printf("%s", line);
    }
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/**
 * @brief Removes trailing spaces and tabs from string entered
 * 
 * @param line Line to format
 * @param len  Length of the line to format
 */
void removeTrailingBlanksAndTabs(char line[], int len){
    for (int i = len-2; i >= 0; --i){
        if (line[i] == ' ' || line[i] == '\t'){
            continue;
        } else {
            line[++i] = '\n';
            line[++i] = '\0';
            break;
        }
    }
}