#include <stdio.h>

int what(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        res = res ^ a[i];
    }
    return res;
}
int main()
{
    int a[] = {11, 44, 11, 33, 44};
    printf("%d\n", what(a, 5));
}
