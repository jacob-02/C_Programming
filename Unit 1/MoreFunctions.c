#include <stdio.h>
int display(int x, int y);
void test(int t);
 
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
 /*
 An activation record is created whenever a function call is made
 Stack frame
    Variables in the function : Local Variable of Callee
    Return address of the caller
    Location to store the return value
    Parameters in the the callee
    Temporary variables
 */