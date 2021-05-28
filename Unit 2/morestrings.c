#include <stdio.h>

int main()
{
    char ch[25];
    printf("Enter the name of the person\n");
    // scanf("%s", ch);    // In an array no need to give ampresand because the array directly points to the address

    scanf("%[^\n]", ch);    // Tell it to accepts all the characters except the \n
    printf("The name of the person is %s\n", ch);

    char name[25];
    printf("Enter the value of a\n");
    getchar();
    scanf("%5[a-z]s", name);
    printf("The value of a\n", name);
}