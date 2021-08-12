#include <stdio.h>

int main()
{
    int arr[] = {12, 33, 44};
    int *p2 = arr;
    printf("before increment %p %d\n", p2, *p2); // 12
    p2++;                                        //same as p2 = p2+1 // This means 5000+sizeof(every element)*1 if 500 is the base address
    //increment the pointer by 1. p2 is now pointing to next location.
    printf("after increment %p %d\n", p2, *p2); // 33
}