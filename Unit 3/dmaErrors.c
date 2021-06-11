#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 100;

    printf("%d\n", *p);

    int *p1 = p;

    printf("Before deallocating the memory\n");
    printf("%p\n", p1);
    printf("%d\n", *p1);

    printf("%p\n", p);
    printf("%d\n", *p);

    free(p1);

    printf("After deallocating the memory\n");
    printf("%p\n", p1);
    printf("%d\n", *p1);

    printf("%p\n", p);
    printf("%d\n", *p);

    p = NULL;
    p1 = NULL;

    printf("After NULLing the memory\n");
    printf("%p\n", p1);
    printf("%d\n", *p1);

    printf("%p\n", p);
    printf("%d\n", *p);
}