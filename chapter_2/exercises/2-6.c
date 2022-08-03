#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(int x, int p, int n, int y);

/* Write a function setbits(x,p,n,y) that returns x with the n bits
   that begin at position p set to the rightmost n bits of y, leaving
   the other bits unchanged.  */
int main(void) {

    printf("%u\n", setbits(11, 3, 3, 32));

    return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n) & ~(~0 << n));
}

unsigned setbits(int x, int p, int n, int y) {
    return  getbits(x, p, n) | y;
}

/*

x: (11)10 -> (00001011)2

y: (32)10 -> (00100000)2

p: 3
n: 3

getbits(x) -> (00000101)2

x: (00001011)2
        ---

        |
        |
        v

y: (00100101)2 -> (37)10
         ---
*/