#include <stdio.h>
#define MAXLINE 100

void squeeze(char s1[], char s2[]);


/* Write an alternate version of squeeze(s1, s2) that deletes 
   each character in s1 that matches any character in the string s2. */

int main(void){
    char a[MAXLINE] = "testing";
    char b[MAXLINE] = "ts";

    squeeze(a, b);
    printf("%s\n", a);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k, canCopy;

    canCopy = 1;
    for (i = k = 0; s1[i] != '\0'; ++i)
    {
        for (j = 0; s2[j] != '\0'; ++j)
        {

            if (s1[i] == s2[j])
            {
                canCopy = 0;
                break;
            }
        }
        if (canCopy)
        {
            s1[k++] = s1[i];
        }
        canCopy = 1;
    }
    s1[k] = '\0';
}


