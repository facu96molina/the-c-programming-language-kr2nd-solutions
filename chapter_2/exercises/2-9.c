#include <stdio.h>

/* bitcount: count 1 bits in x */
int bitcount(unsigned x);


/* In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x.
   Explain why. Use this observation to write a faster version of bitcount. */
int main(void)
{
    int x = 5;
    printf("%d has (%d) 1 bits\n", x, bitcount(x));

    return 0;
}

int bitcount(unsigned x) {
    int b = 0;

    // The x &= (x-1) operation will invert the value of the rightmost bit through subctraction by 1.
    for (b = 0; x != 0; x &= (x-1))
            b++;

    return b;
}