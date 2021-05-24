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
    printf("p+1 = %p\t", (double *)p+1);   // Type casts p+1 to an double
}