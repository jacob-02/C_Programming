#include <stdio.h>
#include <limits.h>

enum sample
{
    abc = INT_MAX
};

// enum examples
// {
//     // abc = 3.5, def = "hello"    // The enums can hold only integers
// };

int main()
{
    printf("%d\n", abc);
}
