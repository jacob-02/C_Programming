/*
Features of an Array:
    Random access of the elements are allowed
    A finite collection of data with similar data types
    Succesive/consecutive memory location
    Homogeneous data types of any type are allwed in an array
    Memory is allocated at compile time
    
*/

#include <stdio.h>

int main()
{
    int a[5];
    //int a = 5;
    printf("%p\n", &a);     // size = no of data items * the size of the data type
    int n = sizeof(a);
    printf("%d\n", n);
    printf("%d\n", sizeof(int));

    int b[5] = {1, 2, 3, 4, 5};
    int c[5] = {[2]=5, [4]=7};  // designated initialisation
    
    for(int i=0; i<5; i++)
        printf("%d ", b[i]);
}