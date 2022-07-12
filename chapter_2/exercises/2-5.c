#include <stdio.h>
#define MAXLINE 100

int any(char s1[], char s2[]);

/* Write the funciton any(s1, s2), which returns the 1st location in the
   string s1 where any character from the string s2 occurs, or -1 ir s1
   contains no characters from s2. */
int main(void)
{
    int result;

    char a[MAXLINE] = "testing";
    char b[MAXLINE] = "x";

    result = any(a, b);

    printf("result: %d\n", result);
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i)
    {
        for (j = 0; s2[j] != '\0'; ++j)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }

    return -1;
}