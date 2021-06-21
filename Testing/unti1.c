#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 100;
    int b = 200;
    printf("before call a is %d and b is %d\n", a, b);
    // a is 100 and b is
    swap(&a, &b);
    printf("after call a is %d and b is %d\n", a, b);
}