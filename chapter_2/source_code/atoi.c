#include <stdio.h>

int atoi(char s[]);

/* Converts a string of digits into its numeric equivalent */
int main(void){

    printf("%d\n", atoi("1234"));
    return 0;
}

/* atoi: convert s to integer */
int atoi(char s[]){
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}