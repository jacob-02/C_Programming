/*
Control Structures:
    
    Looping structures:
        -while
            Syntax:
                while(expression):
                {
                    block statements;
                }

        -for
            Syntax:

        -do while
    
    Selection Structures:
        -for
        -else if
        -else
        -nested if
        -switch


*/

#include <stdio.h>

int main()
{
    // Finding the sum of 1 to n
    
    int n=10, i=1, sum=0;
    
    while (i<=n)         // Using while loops
    {
        sum = sum+i;
        i++;
    }

    printf("%d", sum);
    sum = 0;

    for(i = 0; i<=n; i++)
        sum += i;
    
    printf("%d", sum);
}