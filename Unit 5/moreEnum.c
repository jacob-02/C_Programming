#include <stdio.h>
#include <limits.h>

enum sample
{
    abcde,
    abc,
    abcd //Default first value starts at 1
};

// enum examples
// {
//     // abc = 3.5, def = "hello"    // The enums can hold only integers
// };

int main()
{
    printf("%d %d %d\n", abc, abcd, abcde);
}
