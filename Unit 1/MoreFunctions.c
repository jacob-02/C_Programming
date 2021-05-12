#include <stdio.h>
 int display(int a, int b)
 {
     printf("Hello world\n");
     printf("%d %d\n", a, b);
     return a+b;
 }

 int main()
 {
     int a, b;
     a=10, b=20;
     int sum=display(a, b);
     printf("%d\n", sum);
 }

 /*
 An activation record is created whenever a function call is made
 Stack frame
    Variables in the function : Local Variable of Callee
    Return address of the caller
    Location to store the return value
    Parameters in the the callee
    Temporary variables
 */