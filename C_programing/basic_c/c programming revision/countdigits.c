#include<stdio.h> 
int main()
{
    int n ,count;
    printf("Enter the number: \n");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the number of digits are: %d",count);
    return 0;
}