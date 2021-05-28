#include <stdio.h>
int display(int x, int y);
void test(int t);
void what(int *q);
int *one(int *x);
 
 int main()
 {
     int a, b;
     a=10, b=20;
     int sum=display(a, b);
     printf("%d\n", sum);
     int *p = &a;
     test(200);
     printf("a:%d *p:%d p:%d\n", a, *p, p);
     what(p);
     printf("a:%d *p:%d p:%d\n", a, *p, p);
     int c = 1000;
     p = one(&c);
     printf("c:%d *p:%d p:%d\n", c, *p, p);
 }

 int display(int a, int b)
 {
     printf("Hello world\n");
     printf("%d %d\n", a, b);
     return a+b;
 }

 void test(int t)
 {
     t = 200;
 }

void what(int *q)
{
    int temp = 100;
    *q = temp;
}

int *one(int *x)
{
    int q = 1000;
    return &q;      // => this is called a dangling pointer. the value points to a value that is not existent after the function is run
}

int *one(int *x)
{
    return x;
}

 /*
 An activation record is created whenever a function call is made
 Stack frame
    Variables in the function : Local Variable of Callee
    Return address of the caller
    Location to store the return value
    Parameters in the the callee
    Temporary variables
 */