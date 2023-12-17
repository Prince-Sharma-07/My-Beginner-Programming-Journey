#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int substract(int c, int d){
    return c-d;
}
int main()
{
    int(*fptr)(int, int);
    fptr=&sum;
    int opt=sum(10,12);
    printf("%d\n",opt);
    fptr=&substract;
    int opt2=substract(10,5);
    printf("%d",opt2);
    return 0;
}