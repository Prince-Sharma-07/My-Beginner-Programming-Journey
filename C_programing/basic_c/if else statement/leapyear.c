#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : \n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("NOt a Leap Year");
    }

    return 0;
}