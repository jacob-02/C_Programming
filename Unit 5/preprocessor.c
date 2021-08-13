// #include <stdio.h>

// int main()
// {
//     printf("File Name : %s\n", __FILE__);
//     printf("Date is : %s\n", __DATE__);
//     printf("Time is : %s\n", __TIME__);
//     printf("C Version is %ld\n", __STDC_VERSION__);
// }

// #include <stdio.h>

// int main()
// {
//     #ifdef MAX
//     printf("Hello\n");
//     #endif
//     printf("everyone\n");
//     return 0;
// }

#include <stdio.h>
#define sqr(x) (x * x) //change this to (x)*(x).
int main()
{
    int y = 8;
    printf("%d\n", sqr(2 + 3)); // 2 + 3 * 2 + 3
    return 0;
}