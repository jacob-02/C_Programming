/*

Passing parameters in C
Function Call - Arguments
Funciton Definition - Parameters
    Pass by value
    Pass by reference

*/

#include <stdio.h>

void display(int a)
{
    printf("before a=%d\n", a);
    a = 200;
    printf("after passing a=%d\n", a); 
}

int main()
{
    int a = 100;
    printf("before passing a=%d\n", a);
    display(a);
    printf("after passing a=%d\n", a);
    return 0;
}