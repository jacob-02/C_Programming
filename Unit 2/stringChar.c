#include <stdio.h>

char *stringchar(char *a, char ch);

int main()
{
    char str1[100];
    printf("Enter the string\n");
    scanf("%s", str1);

    printf("Enter the character\n");
    fflush(stdin);
    char ch = getchar();
    
    char *p = stringchar(str1, ch);

    if(p)
        printf("Present at this address %p", p);

    else
        printf("The character is not available\n");
}

char *stringchar(char *a, char ch)
{
    char *p = NULL;
    char *s = a;
    while (*s != '\0' && p == NULL)
    {
        if(*s == ch)
            p = s;
        s++;
    }

    return p;
    
}