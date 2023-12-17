#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int* arr=(int*)calloc(n,sizeof(int));
    if(arr!=0){
        printf("memory not allocated\n");
        exit(0);
    }
    else if(arr==0){
        printf("memory allocated successfully\n");
    for(int i=0; i<n; i++){
    arr[i]=i+1;
    printf("%d ",arr[i]);
    }
}
    return 0;
}