#include <stdio.h>

struct sample
{
    unsigned int a:3; // Each digit gives 2 values that can be added. 1 gives 0,1. 2 gives 0 to 3 and so on
    int b:1;
    // double c:3;  INVALID
};


int main()
{
    printf("Sizeof the structure is %lu\n", sizeof(struct sample));
    struct sample s;

    s.a = 5;    //Not allowed. large integer implicitly truncated to unsigned type 
    printf("%d\n", s.a);
}