#include <stdio.h>

int main()
{
    // char*p = "PESU";
    // printf("%s\n", p);
    // p++;
    // printf("%s", p);
    // p--;
    // printf("%s\n", p);
    // p[1] = 'e';
    // printf("%s", p);
    // printf("Size of the string is %d", sizeof(p));

    // This code is to show that once a value is assigned to an array using the double quotes u can't change using the p[1] = x condition
    char p[] = "PESU";
    char p1[] = {'P', 'E', 'S', 'U'};
    printf("Size of the string 1 is %ld\n", sizeof(p));
    printf("Size of the string 2 is %ld\n", sizeof(p1));
    printf("%s\n", p);
    printf("%s\n", p1);
    p[1] = 'e';
    p1[1] = 'e';
    printf("%s\n", p);
    printf("%s\n", p1);
}