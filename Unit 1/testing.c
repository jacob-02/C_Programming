#include <stdio.h>

int main()
{
    math();
}

void math()
{
    int a, b;

    printf("Enter the number for a\n");
    scanf("%d %d", &a, &b);

    int c = a+b;

    printf("The sum of the 2 numbers is %d\n", c);
}
