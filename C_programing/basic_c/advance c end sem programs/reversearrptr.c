#include<stdio.h>
void reverse(int* arr, int size){
    for (int i=1; i<=size; i++){
        arr[size-i];
        return;
    }

}
int main()
{ int size;
printf("enter the size of array\n");
scanf("%d",&size);
int *brr[size];
for (int i=0; i<size; i++){
    scanf("%d",&brr[i]);
    reverse(brr[size], size);
    printf("%d ",brr[i]);
}
return 0;
}