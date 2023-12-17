#include <stdio.h>
int value(int a , int b)
{
    printf("the value of the a and b is %d %d",a,b);
}
int main ()
{
    int a = 1;
    int b = 2;
    
    int (*ptr) (int,int) = &value;
    ptr(10,20);
    return 0;
}