#include<stdio.h>
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int brr[3][2]={{1,2},{3,4},{5,6}};
    int res[2][2];
    int cr=3;
    for(int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            res[i][j]=0;
for(int k=0; k<cr; k++){
    res[i][j]+=arr[i][k]*brr[k][j];
}
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
    }
return 0;
}