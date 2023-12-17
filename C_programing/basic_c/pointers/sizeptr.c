#include<stdio.h>
int main()
{
    int x = 10;
    int* cptr = &x;
    int c= sizeof(cptr);
    printf("%d\n",c);
    return 0;
}