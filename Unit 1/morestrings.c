#include <stdio.h>

int main()
{
    char ch[25];
    printf("Enter the name of the person\n");
    scanf("%s", ch);    // In an array no need to give ampresand because the array directly points to the address
    printf("The name of the person is %s\n", ch);
}