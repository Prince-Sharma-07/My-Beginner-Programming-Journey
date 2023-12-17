#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);
    }
    printf("The absolute value of the integer is : %d", n);
    return 0;
}