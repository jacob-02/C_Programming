#include <stdio.h>
int stringlength(char a[]);

int main()
{
    char a[] = "Man";
    printf("The length of the string is : %d\n", stringlength(a));
}

// int stringlength(char *a)
// {
//     int i = 0;
//     while(a[i] != '\0')
//         ++i;  
    
//     return i;

//     // OR
// }

// int stringlength(char *a)
// {
//     int i = 0;
//     while(*(a+i) != '\0')
//         ++i;
    
//     return i;
// }

int stringlength(char *a)
{
    if(!(*a))
        return 0;
    
    else
        return(1+stringlength(++a));
}


