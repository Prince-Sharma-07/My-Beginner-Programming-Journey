#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of arrray: \n");
    scanf("%d",&n);
    int arr[n],i,j;
    printf("enter the elements of array: \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]<arr[j]){  //do < for decending
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the second largest number is: \n");
        printf("%d ",arr[1]);
    return 0;
}