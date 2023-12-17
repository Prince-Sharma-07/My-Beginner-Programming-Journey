#include<stdio.h> 
#define n 6

void bubblesort(int arr[]){
    for (int i=0; i<n; i++){
          for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
            arr[j]=arr[j]+arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];
            }
          }
    }
    
    ("The Sorted array is: ");
    for(int i=0; i<6; i++){
        printf("%d ",arr[i]);
    }
    return;
}

int main(){
    int arr[n]={6,9,3,1,5,8};
    bubblesort(arr);
    return 0;
}