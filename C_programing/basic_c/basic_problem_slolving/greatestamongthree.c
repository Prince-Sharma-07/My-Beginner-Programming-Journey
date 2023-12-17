#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the First number : \n");
    scanf("%d", &a);
    printf("Enter the Second number : \n");
    scanf("%d", &b);
    printf("Enter the Third number : \n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The greatest number is %d\n", a);
    }
    if (b > a && b > c)
    {
        printf("The greatest number is %d\n", b);
    }
    if (c > a && c > b)
    {
        printf("The greatest number is %d\n", c);
    }
    if(a==b==c)
    {
        printf("all numbers are equal i.e %d",a);
    }
    if (a == b && c < a)
    {
        printf("a and b both are equal and greatest i.e %d\n", a);
    }
    if (b == c && a < b)
    {
        printf("b and c both are equal and greatest i.e %d\n", b);
    }
    if (a == c && b < c)
    {
        printf("a and c both are equal and greatest i.e %d\n", a);
    }

    return 0;
}