#include<stdio.h>
int main()
{ int n, m;
printf("enter the number of rows and columns \n");
scanf("%d%d",&n,&m);
   int arr[n][m];
   int brr[n][m];
   int res[n][m];
   printf("enter the elements of arr\n");
   for(int i=0; i<n; i++){
   for(int j=0; j<m; j++){
    scanf("%d",&arr[i][j]);
   }
   }
   printf("enter the elements of brr\n");
   for(int i=0; i<n; i++){
   for(int j=0; j<m; j++){
    scanf("%d",&brr[i][j]);
   }
   }
   for(int i=0; i<n; i++){
   for(int j=0; j<m; j++){
    res[i][j]=arr[i][j]+brr[i][j];
   }
   }
   for(int i=0; i<n; i++){
   for(int j=0; j<m; j++){
    printf("%d ",res[i][j]);
   }
   printf("\n");
   }
    return 0;
}