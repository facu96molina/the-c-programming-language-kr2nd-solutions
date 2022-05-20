#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

void reverse(char text[], int len);
int getLine(char s[], int lim);

int main(void){
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while((len = getLine(line, MAXLINE)) > 0){
        reverse(line, len);
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
 * @brief Reverse the character string entered
 * 
 * @param text Input text to reverse
 * @param len Length of text entered
 */
void reverse(char text[], int len){
    char aux;

    for (int i = 0, j = len - 2; i < j; ++i, --j){
        aux = text[i];
        text[i] = text[j];
        text[j] = aux;
    }
}