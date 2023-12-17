#include<stdio.h>
int main()
{
    int i, j,n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    j=n*10;
    printf("The table of %d is: \n");
    for(i=n; i<=j; i=i+n){
        printf("%d ",i);
    }
    return 0;
}