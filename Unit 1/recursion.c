/*
A function calling itself. The same crap as in python
*/

#include <stdio.h>
int factorial(int n);

int main()
{
    int n = 4;
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    
    else
        return n*factorial(n-1);
}