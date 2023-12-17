#include<stdio.h>
void passarr(int arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
   
  int brr[size]={1,2,3,4,5};
printf("array elements: \n");
passarr(brr,size);
return 0;
}