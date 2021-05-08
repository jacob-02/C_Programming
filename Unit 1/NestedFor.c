#include <stdio.h>

int main()
{
    int n=5;

    for(int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");        
    }

    int i,j;
    i = 1;

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        i++;
        printf("\n");
    }
    

}