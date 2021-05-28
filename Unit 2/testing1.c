#include <stdio.h>
int main()
{
    printf("Final : %d\n", what(15));
}
int what(int n)
{
    if(n == 0)
        return 0;
    
    else
    {   
        printf("%d\n", ((n&1) + what(n>>1)));
        return ((n&1) + what(n>>1));
    }
}

// WAP to find the power of a number using recursion

// Find the sum of n numbers using recursive function