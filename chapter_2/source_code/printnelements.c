#include <stdio.h>

void printnElements(int arr[], int length, int n);

int main(void) {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};

    int arrLength = sizeof(arr) / sizeof(arr[0]);
    
    printnElements(arr, arrLength, arrLength);

    printf("You have %d item%s.\n", arrLength, arrLength==1 ? "" : "s");

    return 0;
}

/* Prints n elements of an array, 10 per line, with each column separated by one blank
   and with each line (including the last) terminated by a newline. */
void printnElements(int arr[], int length, int n)
{
    if (n > length) 
        return;
    else
        for (int i = 0; i < n; i++)
            printf("%6d%c", arr[i], (i%10==9 || i==n-1) ? '\n' : ' ');
}