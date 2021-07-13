#include <stdio.h>

int main()
{
    printf("File Name : %s\n", __FILE__);
    printf("Date is : %s\n", __DATE__);
    printf("Time is : %s\n", __TIME__);
    printf("C Version is %ld\n", __STDC_VERSION__);
}