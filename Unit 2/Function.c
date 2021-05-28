/*
    Function Definition:
        Return type
        Function name
        Parameters
        Body
    
    Function with return type and no parameters
    Funciton with return type and parameters
    Function with no return type and paremeters
    Function type with no return type and no parameters
*/

#include <stdio.h>

int main()
{   
    int a = 10, b = 20;
    printf("enter the values of a and b\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int c = mather(a, b);
    printf("%d\n", c);
}

int mather(int a, int b)
{
    return a+b;
}
