#include<stdio.h>
int main()
{
    int size , b[size];
    printf("enter the size for array\n");
    scanf("%d",&size);
    printf("enter the elements of your array\n");
    for(int i = 0; i<size; i++){
        scanf("%d",&b[i]);
        printf("%d\n",b[i]);
        
    }
    return 0;
}