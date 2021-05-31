#include <stdio.h>
void stringcopy(char b[], char a[]);

int main()
{
    char a[] = "Life is Awesome";
    char b[20];
    printf("%s\n", a);
    stringcopy(b, a);
    printf("%s\n", b);
}

// void stringcopy(char b[], char a[])
// {
//     int i = 0;
//     while(a[i] != '\0')
//     {
//         b[i] = a[i];
//         i++;
//     }
//     b[i] = '\0';
// }

void stringcopy(char *b, char *a)
{
    int i = 0;
    while (*(a) != '\0')
    {
        *b = *a;
        b++;
        a++;
    }
    *(b + i) = '\0';
}