#include <stdio.h>
int ariSeries(int num);

int main()
{
    int num;
    printf("Enter the number of numebers that you want to find the sum of : ");
    scanf("%d", &num);
    int sum = ariSeries(num);
    printf("Sum of %d numbers is : %d\n", num, sum);
}

int ariSeries(int num)
{
    if(num == 1)
        return num;
    
    else
        return num+ariSeries(num-1);
}