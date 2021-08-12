#include <stdio.h>
#include "palindrome.h"

int main()
{
    printf("Enter the number that you want to check if it is a palindrome\n");
    int n;
    scanf("%d", &n);
    printf("%d\n", palindrome(n));
    if (palindrome(n) == 1)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    
}