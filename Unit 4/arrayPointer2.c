#include <stdio.h>

int main()
{
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int *p[10];

    for (int i = 0; i < 3; i++)
    {
        printf("%d %d\n", p[i], &a[i]);
    }
    
}