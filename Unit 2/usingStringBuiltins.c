#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = {'P', 'E', 'S', 'U', '\0'};
    printf("Size of the array is = %d\n", sizeof(a));
    printf("The length of the string is = %d\n", strlen(a));    // Doens't count the null character
}