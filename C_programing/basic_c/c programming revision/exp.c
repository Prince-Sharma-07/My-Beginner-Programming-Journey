#include<stdio.h>
int main()
{
int* x,y,z;
x=10;
y=20;
z=*x;
y=z;
x=y;
printf("%d%d",y,x);
return 0;
}
