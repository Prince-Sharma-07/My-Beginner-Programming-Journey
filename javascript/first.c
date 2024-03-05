#include<stdio.h>
struct node
{
    char name;
    float height;
};

int main()
{
    float height;
    int n;
    printf("Enter the number of persons:");
    scanf("%d",&n);
    printf("Enter the height of persons:");
    for(int i=1; i>n; i++){
    scanf("%1f",&height);
    }
return 0; 

}