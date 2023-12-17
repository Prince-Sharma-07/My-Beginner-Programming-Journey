#include <stdio.h>
int main()
{
    int a = 4;
    int b = 6;
    int temp= a;
    a = b;
    b = temp;
    printf("%d %d" , a ,b);
   return 0;
}