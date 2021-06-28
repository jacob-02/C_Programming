#include <stdio.h>

int main()
{
    FILE *fp = fopen("abc.txt", "r");
    printf("%p\n", fp);
}