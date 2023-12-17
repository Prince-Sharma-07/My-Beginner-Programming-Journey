#include<stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
   int a,b;
   printf("enter the value of a \n");
   scanf("%d",&a);
   printf("enter the value of b \n");
   scanf("%d",&b);
    int c=MAX(a,b);
    printf("the greater number is %d",c);
    return 0;
}