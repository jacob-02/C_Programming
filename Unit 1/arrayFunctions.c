#include <stdio.h>

void f1(int a[])
{

}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Array size inside the main function is%d\n", n);
    f1(a);
}