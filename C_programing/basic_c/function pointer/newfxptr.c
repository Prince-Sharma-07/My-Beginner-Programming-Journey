#include <stdio.h>
int (*ptr) (int, int);
int sum(int num1, int num2){
    return num1+num2;
}

int main ()
{
int a= 10; 
int b=10;
ptr=&sum;
int d= ptr(a,b);
printf("%d\n",d);
return 0;

}