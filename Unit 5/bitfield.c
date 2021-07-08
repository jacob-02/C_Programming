#include <stdio.h>

struct sample
{
    unsigned int a:1;
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