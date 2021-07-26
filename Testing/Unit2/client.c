#include <stdio.h>
#include "palin.h"
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (is_palin(n)) //defition in palin.c ( next page )
    {
        printf("%dis a palindrome\n", n);
    }
    else
    {
        printf("%d is not a palindrome\n", n);
    }
}