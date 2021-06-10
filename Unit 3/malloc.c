#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("%p\n", p);
    printf("%d\n", *p);

    int *x;
    int n, i;

    printf("Enter the number of elements\n");
    scanf("%d", &n);

    x = (int *)malloc(n * sizeof(int));

    if(x == NULL)
        printf("Memory is not allocated\n");

    else
    {
        printf("It is allocated\n");
        printf("Enter the values\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", (x+i));
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d", *(x+i));
        }

        printf("\n");
        
    }
}