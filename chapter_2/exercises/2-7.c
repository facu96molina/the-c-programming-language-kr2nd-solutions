#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned invert(int x, int p, int n);

/* Write a function invert(x, p, n) that returns x with the n bits that
   begin at position p inverted (i.e., changed into 0 and vice versa), leaving
   the others unchanged. */
int main(void) 
{
    printf("%u\n", invert(45, 4, 3));

    return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n) & ~(~0 << n));
}

unsigned invert(int x, int p, int n)
{
   return x ^ (getbits(~0, p, n) << (p - n + 1));
}

/* 

Example: invert(45, 4, 3)

(45)10 -> (00101101)2 -> (00110001)2 -> (49)10
              ---            ---

 */