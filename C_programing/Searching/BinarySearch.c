#include<stdio.h>
int n;

void bubblesort(int arr[],int n){
    for (int i=0; i<n; i++){
          for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
            arr[j]=arr[j]+arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];
            }
          }
    }
  
    return;
}

int BinarySearch(int arr[],int l, int r, int no){
    int mid = l+r/2;
    if(no>mid){
      l=mid+1;
      BinarySearch(arr,l,r,no);
    }
   else if(no<mid){
    l = mid -1;
    BinarySearch(arr,l,r,no);
   }
   else if(no==mid){
        return mid;
   }
   
   return -1;

}
int main(){
    int no;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n] ,l=0,r=n-1;
    printf("Enter the elements of array: \n");
    for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched: \n");
    scanf("%d",&no);
    printf("The element is found at index %d",BinarySearch(arr,l,r,no));
    return 0;  
}