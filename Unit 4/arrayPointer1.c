#include <stdio.h>

struct sample
{
    int a;
    float b;
};

void display(struct sample* s[3], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %f\n", s[i] -> a, s[i] -> b);
    }
    
}

void swap(struct sample** s1, struct sample** s2)
{
    struct sample *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main()
{
    struct sample s1[] = {{22, 2.2}, {33, 3.3}, {44, 4.4}};
    struct sample * s[3]; // This is an array of pointers

    for (int i = 0; i < 3; i++)
    {
        s[i] = &s1[i];
    }
    printf("Before swap\n");
    display(s, 3);
    swap(&s[0], &s[2]);
    printf("After swap\n");
    display(s, 3);
}
