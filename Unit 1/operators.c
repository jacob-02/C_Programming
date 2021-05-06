/*

Operators
    types of operators
    based on the operands 
        unary - one operator
        binary - 2 operators
        ternary - 3 operators
    
    Increment Operators
        ++ is used
    
    Decrement Operators
        -- is used

    Logical Operators:
        When more than one condition needs to be tested
        Yields a value of one or zero
        Execution happens from left to right
        Stops as soon as flasehood or truth is determined

*/

#include <stdio.h>

int main()
{
    printf("%d %f %f %f\n", 25/4, 25.0/4.0, 25.0/4, 25/4.0);

    // Logical Operators

    int a = 5, b = 10;
    int res = (a == 5) && (b == 10);    // If both conditions are true, then the value of res is 1, else 0
    printf("%d\n", res);

    // Using XOR

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d\n", a, b);

    // Dereferencing

    int *p = &a;    // This is the dereferencing operator
    printf("%p %p\n", &a, &p);  // Address of p
    printf("%d %d\n", a, p);  // Address of a

    int q = &b;
    printf("%d %d\n", q, b);

    // Ternary Operator or Conditional Operator

    int x = 5,y =3;
    int s = (x > y)?x:y;

    printf("%d\n", s);
    (x > y)?printf("%d", x):printf("%d", y);
}