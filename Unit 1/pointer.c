#include <stdio.h>

int main()
{
    // Pointer arithmetic pointers
    // The code here is to show how the memory allocation of pointer happens depending on the type of pointer

    int *p;
    int x = 10;
    p = &x;
    printf("%p\t", p);

    printf("p+1 = %p\t", (int *)p+1);   // Type casts p+1 to an integer
    printf("p+1 = %p\t", (char *)p+1);   // Type casts p+1 to an char
    printf("p+1 = %p\n\n", (double *)p+1);   // Type casts p+1 to an double

    // Array traversal using pointers

    int arr[] = {12, 33, 44};
    int *p2 = arr;  // No ampersand for array is already an address of the first value in the array
    printf("Before increment %p %d\n", p2, *p2);   // Prints the value of the first value in the array
    p2++;
    printf("After increment %p %d\n", p2, *p2);    // Prints the value of the second value of the array because of the increment of the address

    // This shows that the array elements are arranged one after another in the memory

}