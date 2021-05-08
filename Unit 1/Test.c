#include <stdio.h>

int main()
{
    int n = 29;
    int s = 0;
    
    while (n > 0)
        {
            while (n > 0)
            {
                s = s + (n % 10);
                n = n/10;
            }
            if (s >= 10)
            {
                n = s;
                s = 0;
            }  
        } 
    
    printf("%d", s);
}