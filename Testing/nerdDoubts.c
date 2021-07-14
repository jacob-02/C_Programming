#include <stdio.h>

int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int (*p)[5] = a;
    printf("%p %p %p\n", p+0, p+1, p+2);
    printf("%d %d %d\n", *(*(p+0)), *(*(p+1)), *(*(p+2)));
}