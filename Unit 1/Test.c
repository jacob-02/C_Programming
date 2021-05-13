#include <stdio.h>

int main()
{
    int q = 2345;
    int i = 0;
    int r;
    int odd = 0, even = 0, zero = 0;

    while (i == 0)
    {
        r = q%10;
        q = q/10;
        
        if (r%2 == 0 && r != 0)
            even++;
        
        else if (r%2 != 0)
            odd++;
        
        else if (q == 0)
            break;
        
        else
            zero++;
    }

    printf("Odd :%d\n", odd);
    printf("Even :%d\n", even);
    printf("Zero :%d\n", zero);
}