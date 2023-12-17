#include<stdio.h>

void linearSearch(int arr[], int n , int size){
    int loc=-1;
    for(int i=0; i<size; i++){
        if(n==arr[i]){
            loc = ++i;
        }
    }
    if(loc>=0)
    printf("Item is found at position %d.\n", loc);
    else
    printf("Item not found!!!\n");
}

int main(){
    int item,size,i=0;
    printf("Enter the size of the array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array: \n");
    while(i<size){
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Enter the item to be searched: \n");
    scanf("%d",&item);
    linearSearch(arr,item,size);
    return 0;
}