#include <stdio.h>
#include <string.h>

int main()
{
    // char a[] = {'P', 'E', 'S', 'U', '\0'};
    // printf("Size of the array is = %d\n", sizeof(a));
    // printf("The length of the string is = %d\n", strlen(a));    // Doens't count the null character

    char a[] = "PES";
    char b[10];
    // a = b;   This is an error

    printf("String a  = %s\n", a);
    printf("String b  = %s\n", b);

    strcpy(b, a);
    
    printf("String a  = %s\n", a);
    printf("String b  = %s\n", b);

    char c[] = "University";
    printf("Strcmp is %d\n", strcmp(a, c));
    printf("Strcmp is %d\n", strcmp(a, b));
    printf("Strcmp is %d\n", strcmp(b, c));
}