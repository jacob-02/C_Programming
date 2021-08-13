#include <stdio.h>

enum months
{
    jan = 1, feb, mar = 4, april, may = 5, june, july, aug = 8, sep, oct, nov, dec = 12
};

int main()
{
    printf("The sizeof months is %ld\n", sizeof(enum months));
    printf("%d %d %d %d %d\n", jan, feb, april, may, july);
    printf("Enter the value for month\n");
    enum months m;
    scanf("%d", &m);
    printf("%d\n", m);

    enum months m1 = may;
    printf("%d\n", m1);
}