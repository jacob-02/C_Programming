#include <stdio.h>

int add(int x, int y)
{
    return x+y;
}

int subtract(int x, int y)
{
    return x-y;
}

int operation(int x, int y, int (*op)(int, int))     //it indicated a function pointer. 
{
    return op(x, y);
}
int main()
{
    int (*p)(int, int);
    p = add;

    int res = p(2, 3);

    printf("%d\n", res);

    printf("%d\n", operation(2, 3, subtract));
}
