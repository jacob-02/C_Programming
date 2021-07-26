#include <stdio.h>
typedef enum errorType
{
    warning,
    error,
    exception
}error1;
void main()
{
    error1 g1;
    g1 = 1;
    printf("%d\n", g1);
}