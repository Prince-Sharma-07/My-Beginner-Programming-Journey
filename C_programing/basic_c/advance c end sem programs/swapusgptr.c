#include<stdio.h> 
void swap(int* x , int* y){
    int temp = *x;
        *x = *y;
        *y = temp;
        return;
}
    int main(){
      int a , b;
      printf("enter the two numbers a and b: \n");
      scanf("%d %d", &a , &b);
      swap(&a, &b);
      printf("a=%d b=%d",a,b);
      return 0;
    }
