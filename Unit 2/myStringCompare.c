#include <stdio.h>
int stringcompare(char a[], char b[]);

int main()
{
    char str[100], str2[100];

    printf("Enter the string one :\n");
    scanf("%s", str);
    printf("Enter the string two :\n");
    scanf("%s", str2);

    int res = stringcompare(str, str2);

    if(res == 0)
        printf("The two strings, %s and %s, are the same\n", str, str2);
    
    else if(res > 0)
        printf("%s is greater than %s\n", str, str2);
    
    else
        printf("%s is smaller than %s\n", str, str2);
}

int stringcompare(char a[], char b[])
{
    int i = 0;
    int check = 0;

    while(a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
        i++;
    
    return a[i] - b[i];
}