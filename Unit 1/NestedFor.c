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

    int i,j, sum = 0;
    i = 1;

    while (i <= n)
    {
        j = 1, sum = 0;
        while (j <= i)
        {
            printf("%d ", j);
            sum += j;
            j++;
        }
        i++;
        printf(" = %d", sum);
        printf("\n");
    }

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            printf("%c ", 'A'+j-1);     // We can get the ASCII directly using %c and 'Alphabet'
            j++;
        }
        i++;
        printf("\n");
    }  

}