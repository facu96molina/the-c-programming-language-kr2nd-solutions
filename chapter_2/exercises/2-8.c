#include <stdio.h>


unsigned rightrot(unsigned x, int n);

/* Write a function rightrot(x, n) that returns the value of the integer x rotated to the right
by n bit positions. */
int main(void) {

    unsigned x = 129;
    int n = 1;

    printf("%u rotated to the right by %d positions: %u\n", x, n, rightrot(x, n));

    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    unsigned result = x;
    unsigned temp = 0;

    for (int i = 0; i < n; ++i)
    {
        // Extract the value of the rightmost bit
        temp = result & 1;

        // Rotate the number to the right
        result >>= 1;

        // Store the extrated value in the leftmost bit
        result |= (temp << 31);
    }

    return result;
}