#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 100;

    printf("%d\n", *p);

    int *p1 = p;
    printf("%d\n", *p1);

    free(p1);
    
    printf("%d\n", *p1);
}