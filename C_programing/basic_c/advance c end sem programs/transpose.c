#include<stdio.h>
int main()
{
    int r,c;
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
    printf("the transpose array is: \n");
     for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
    printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}