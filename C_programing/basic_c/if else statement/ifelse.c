#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n : \n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is even :");
    }
    if (n % 2 != 0)
    {
        printf("The given number is odd : \n");
    }
    return 0;
}