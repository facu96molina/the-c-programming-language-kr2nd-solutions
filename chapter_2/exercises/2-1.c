#include <stdio.h>
#include <limits.h>

#define BYTE 8
#define SIZEOF(n) sizeof(n) * BYTE

long power(int base, int n);

#define SIGNED_MIN(n)   -(power(2, n - 1))
#define SIGNED_MAX(n)    (power(2, n - 1)) - 1 
#define UNSIGNED_MAX(n)  (power(2, n)) - 1 

/* Write a program to determine the ranges of char, short, int
   and long variables, both signes and unsigned, by printing appropriate
   values from standard headers and by direct computation. Harder if you
   compute them: determine the ranges of the various floaintg-poing types. */
int main(void){
    printf("Values from standard headers:\n");
    printf("--------------\n");

    printf("\t CHAR -> [%4d, %d]\n", CHAR_MIN, CHAR_MAX);
    printf("UNSIGNED CHAR -> [%4u, %u]\n", 0, UCHAR_MAX);

    printf("\t SHORT -> [%6d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("UNSIGNED SHORT -> [%6u, %u]\n", 0, USHRT_MAX);

    printf("\t INT -> [%11d, %d]\n", INT_MIN, INT_MAX);
    printf("UNSIGNED INT -> [%11u, %u]\n", 0, UINT_MAX);

    printf("\t LONG -> [%20ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("UNSIGNED LONG -> [%20u, %lu]\n", 0, ULONG_MAX);
    
    printf("--------------\n");

    printf("Values from direct computation:\n");

    printf("--------------\n");

    printf("\t CHAR -> [%4d, %d]\n", (int) SIGNED_MIN(SIZEOF(char)), (int) SIGNED_MAX(SIZEOF(char)));
    printf("UNSIGNED CHAR -> [%4u, %u]\n", 0, (int) UNSIGNED_MAX(SIZEOF(char)));

    printf("\t SHORT -> [%6d, %d]\n", (int) SIGNED_MIN(SIZEOF(short)), (int) SIGNED_MAX(SIZEOF(short)));
    printf("UNSIGNED SHORT -> [%6u, %u]\n", 0, (int) UNSIGNED_MAX(SIZEOF(short)));

    printf("\t INT -> [%11d, %d]\n", (int) SIGNED_MIN(SIZEOF(int)), (int) SIGNED_MAX(SIZEOF(int)));
    printf("UNSIGNED INT -> [%11u, %u]\n", 0, (int) UNSIGNED_MAX(SIZEOF(int)));

    printf("\t LONG -> [%20ld, %ld]\n", SIGNED_MIN(SIZEOF(long)), SIGNED_MAX(SIZEOF(long)));
    printf("UNSIGNED LONG -> [%20u, %lu]\n", 0, UNSIGNED_MAX(SIZEOF(long)));
    
    printf("--------------\n");

    // TODO: ranges of floating-point types.
    
}

long power(int base, int n){
    long p = 1;
    for (int i = 0; i < n; ++i){
        p = p * base;
    }

    return p;
}