#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(3 * sizeof(int));

    if(p == NULL)
        printf("The memory is allocated\n");

    else
    {
        printf("Initial address is %p\n", p);
        printf("Enter the elements\n");

        for(int i = 0; i < 3; i++)
            scanf("%d", (p + i));
        
        printf("The elements are\n");

        for (int i = 0; i < 3; i++)
            printf("%d\n", (p + i));
        
    }

    p = (int *)realloc(p, 10 * sizeof(int));   
}