#include <stdio.h>

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n) & ~(~0 << n));
}

int main(void)
{
    printf("%d\n", getbits(8, 3, 2));

    return 0;
}

/*

getbits(8, 3, 2)

(8)10 -> (00001000)2

(00001000)2 -> (10)2 -> (2)10
     --
*/