#include<stdio.h>
void fun(int arr[],int crr[]){
    arr[0]=10;
    crr[10]= 5;
    return;
}
int main(){
    int brr[5]={1,2,3,4,5};
    int arr[10];
    printf("%d\n",brr[0]);
    fun(brr,arr);
    printf("%d\n",arr[10]);
    printf("%d\n",brr[0]);
    return 0;


}