/*

variable name given to the location
    name
    value
    type
        set of values
        set of operations
    location
    scope
    lifetime
    qualifiers
    storage class

*/

#include <stdio.h>

int main()
{
    int a = 130;
    printf("%d\n", &a); // This gives the address of the variable
    printf("%d\n", a);  // This gives the value of the variable. If no value is given, it gives a random garbage value

}