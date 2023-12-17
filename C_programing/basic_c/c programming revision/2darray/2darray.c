#include<stdio.h>
int main()
{   int r,c;
    printf("enter the number of rows: \n");
    scanf("%d",&r);
    printf("enter the number of columns: \n");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the elements \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
    scanf("%d",&arr[i][j]);
        }
    }
    printf("the elements in the array are: \n");
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
    printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}