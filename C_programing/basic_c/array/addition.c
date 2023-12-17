#include <stdio.h>
int main()
{
    int matrix[2][2]={1,2,2,3};
    int matri2[2][2]={1,2,3,4};
    int res[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        res[i][j]= matrix[i][j] + matri2[i][j];
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