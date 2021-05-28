#include <stdio.h>
int power(int num, int pow);

int main()
{
    int num, pow;
    printf("Enter the number and it's power\n");
    scanf("%d%d", &num, &pow);
    int final = power(num, pow);  
    printf("Power is : %d\n", final);  
}

int power(int num, int pow)
{
    if(pow == 0)
        return 1;

    else
        return num * power(num, (pow-1));    
}