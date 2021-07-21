#include <stdio.h>
union car
{
    //Assumptions
    char name[10]; // 1 byte for char
    float price;   // 4 bytes for float
};
int main()
{
    union car c;
    printf("Memory size occupied by data in bytes : %ld\n", sizeof(c));
    return 0;
}