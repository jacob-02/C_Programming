#include <stdio.h>

int main()
{
    math();
}

void math()
{
    int a, b;

    printf("Enter the number for a\n");
    scanf(a);

    printf("Enter the number for b\n");
    scanf(b);

    int c = a+b;

    printf("The sum of the 2 numbers is\n");
    printf(c);
}
