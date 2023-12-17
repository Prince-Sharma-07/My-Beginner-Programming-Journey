#include<stdio.h>
float division(float a,float b){
    return a/b;
}
int main(){
    float p,r,c;
    p=50;
    r=4;
    c=division(p,r);
   printf("%f",c);
   return 0;
}