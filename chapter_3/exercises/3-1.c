#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n);
int binsearch2(int x, int v[], int n);

/* Our binary search makes two tests inside the loop, when one would suffice
   (at the price of more tests outside). Write a version with only one test
   inside the loop and measure the difference in run-time. */
int main(void) {    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printf("%d\n", binsearch(3, arr, sizeof(arr)/sizeof(arr[0])));
    printf("%d\n", binsearch2(3, arr, sizeof(arr)/sizeof(arr[0])));

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else /* found match */
            return mid;
    }
    return -1; /* no match */
}

int binsearch2(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;    
    while (low <= high) {
        mid = (low+high) / 2;
        if (x <= v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (x == v[low]) {
        return low;
    }
    return -1; /* no match */    
}
