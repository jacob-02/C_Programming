/*
A function calling itself. The same crap as in python
*/

#include <stdio.h>
int factorial(int n);

int main()
{
    int n = 3;
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
}

int factorial(int n)
{
    return n = n*(n-1);
    factorial;
}