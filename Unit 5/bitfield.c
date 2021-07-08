#include <stdio.h>

struct sample
{
    int a:1;
    int b:1;
};


int main()
{
    printf("Sizeof the structure is %lu\n", sizeof(struct sample));
    struct sample s;
}