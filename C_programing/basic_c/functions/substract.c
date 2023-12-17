#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int(*fptr)(int, int);
    fptr=&sum;
    int c=fptr(10,12);
    printf("%d",c);
    return 0;
}
