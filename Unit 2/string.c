#include <stdio.h>

int main()
{
    char ch[] = {'p', 'e', 's', 'u', '\0'};
    printf("Sizeof character is %ld\n", sizeof(ch)/sizeof(char));
    printf("a:%s\n", ch);
}