#include <stdio.h>

int factors(int n);

int main()
{
    int number, sum;
    scanf("%d", &number);

    sum = factors(number);

    printf("The sum of factors of the number is %d\n", sum);
}

int factors(int number)
{
    int sum = 0;
    for(int i = 0; i < number; i++)
        if(number % i == 0)
            sum += i;
    
    return sum;
}