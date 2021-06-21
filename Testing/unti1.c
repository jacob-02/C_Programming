#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    // int a = 100;
    // int b = 200;
    // printf("before call a is %d and b is %d\n", a, b);
    // // a is 100 and b is
    // swap(&a, &b);
    // printf("after call a is %d and b is %d\n", a, b);

    // int arr[4][3] = {33, 44, 11, 55, 88, 22, 33, 66, 99, 11, 80, 9};
    // int(*p)[3] = arr;
    // printf("%d\n", p[2][1]);
    // printf("%d\n", *(*(p + 2) + 1));
    // printf("%d\n", sizeof(p));
    // printf("%d %d\n", sizeof(*p), sizeof(arr));

    typedef int ag;
    ag age = 10;
    printf("%d\n", age);
}
