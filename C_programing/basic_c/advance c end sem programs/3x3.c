#include<stdio.h>
#define r 3
#define c 3
void display(int arr[r][c]){
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return;  
}
int main()
{   int arr[r][c];
    printf("Enter the elements of matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    display(arr);
    return 0;
}