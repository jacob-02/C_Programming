#include <stdio.h>
enum example1
{
    abc = 123,
    bef = 345,
    cdt = 555
};
void printing(enum example1 e1);
int main()
{
    enum example1 e1;
    // how to print abc, bef and cdt based on user choice?? printf("enter the number");
    scanf("%d", &e1); //enter any number
    printing(e1);     // user defined function to print the symbol name
    return 0;
}
void printing(enum example1 e1)
{
    switch (e1)
    {
    case abc:
        printf("abc\n");
        break;
    case bef:
        printf("bef\n");
        break;
    case cdt:
        printf("cdt\n");
        break;
    default:
        printf("no symbol in enum with this value\n");
        break;
    }
}