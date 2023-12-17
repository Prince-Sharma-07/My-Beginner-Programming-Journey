#include <stdio.h>
int sum(int num1, int num2){
return num1+num2;
}
int main(){
    int(*fptr)(int,int);
    fptr=&sum;
    int a= fptr(4,5);
    int b= fptr(5,6);
    
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}

