#include <stdio.h>

/* strlength: return length of s */
int strlength(char s[]);

int main(void){

    printf("%d\n", strlength("Hello, world"));

    return 0;
}

int strlength(char s[]){
    int i;
    
    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}