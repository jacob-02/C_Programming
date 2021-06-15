#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)calloc(5, sizeof(int));

    printf("Initial address is %p\n", p);
    printf("Enter the elements\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", (p + i));

    printf("Final address is %p\n", p);
    printf("The elements are\n");

    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));

    int *p2 = (int *)realloc(p, 10 * sizeof(int));

    printf("Initial address is %p\n", p2);
    printf("Enter the elements\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", (p2 + i));

    printf("Final address is %p\n", p2);
    printf("The elements are\n");

    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p2 + i));
    
    free(p);
}