#include <stdio.h>

int main()
{
    for (int i = 0, k = 5; i < 5, k > 0; i++, k--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
            for (int a = 0; a < 5; a++)
            {
                printf("*");
            }
        }

        printf("\n");
    }
}