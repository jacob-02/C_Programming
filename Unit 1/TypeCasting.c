/*

Type Casting

    Implicit 
        This is done by the compiler
        
        Example:

            float a = 2.5;
            int sum = (int)(a) + 4;
            printf("%d\n", sum);

*/

#include <stdio.h>

int main()
{
    int a=5, b;
    b = a++;
    printf("%d %d\n", a, b);
    b = a++;
    printf("%d %d", a, b);
}