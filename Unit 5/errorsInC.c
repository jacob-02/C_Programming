#include <stdio.h>

int a;

int main()
{
    int i = 90;
    auto float j = 65.2;
    a = 10;
    for (int k = 0; k < 5; k++)
    {
        a++;
    }

    extern int b;
    b = 10;

    printf("The value of b is %d\n", b);
    printf("Auto i : %d\tj:%f\n", i, j);
    printf("Global a : %d\n", a);
}

int b;