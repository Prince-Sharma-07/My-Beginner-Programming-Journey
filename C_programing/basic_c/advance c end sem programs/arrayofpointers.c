#include<stdio.h>
int main (){
    int a,b,c,d;
    a=2; b=3; c=4; d=5;
    int *arr[4];
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    arr[3]=&d;
    for(int i=0;i<4;i++){
        printf("%d\n",*arr[i]);
    }
    return 0;
}