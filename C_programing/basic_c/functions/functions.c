#include<stdio.h>
int factorial(int x){
int fact=1;
for(int i=2;i<=x;i++){
fact = fact*i;
}
return fact;
}
int main ()
{
    int f; int  n = 7;
    f =factorial(7);
    printf("%d",f);
    return 0;
}

