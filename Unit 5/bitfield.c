#include <stdio.h>

struct sample
{
    unsigned int a:3; // Each digit gives 2 values that can be added. 1 gives 0,1. 2 gives 0 to 3 and so on
    int b:1;
    // double c:3;  INVALID
};

struct sample1
{
    unsigned int a:5; // Each digit gives 2 values that can be added. 1 gives 0,1. 2 gives 0 to 3 and so on
    unsigned int :0;
    unsigned int y:8;
};

int main()
{
    printf("Sizeof the structure is %lu\n", sizeof(struct sample));
    printf("Sizeof the structure is %lu\n", sizeof(struct sample1));
    struct sample s;

    s.a = 5;    //Not allowed. large integer implicitly truncated to unsigned type 
    printf("%d\n", s.a);
}