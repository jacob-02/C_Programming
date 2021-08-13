// #include <stdio.h>
// #include <string.h>
// union car
// {
//     //Assumptions
//     char name[10]; // 1 byte for char
//     float price;   // 4 bytes for float
// };
// int main()
// {
//     union car c;
//     // strcpy(c.name, "HELLO");
//     // c.price = 200.43;
//     printf("Memory size occupied by data in bytes : %d\n", sizeof(car));
//     return 0;
// }

#include <stdio.h>
union car
{                  //Assumptions
    char name[10]; // 1 byte for char
    float price;   // 4 bytes for float
};
int main()
{
    union car c;
    printf("Memory size occupied by data in bytes : %d\n", sizeof(car)); // Don't know why does this show error
    return 0;
}