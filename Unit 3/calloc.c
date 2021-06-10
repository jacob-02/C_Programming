#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, n, i;
    printf("Enter the values of n\n");
    scanf("%d", &n);

    x = (int *)calloc(n, sizeof(int));

    if(x == NULL)
        printf("Memory is not allocated\n");

    else    
    {
        printf("Memory is succesfully allocated\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d", *(x + i));
        }  

        printf("\n");
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d", *(x + i));
        }
    }        
}