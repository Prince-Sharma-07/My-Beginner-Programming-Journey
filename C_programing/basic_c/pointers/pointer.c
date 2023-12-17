#include <stdio.h>
#include <stdlib.h>
int main()
{
int arr[4]={1,2,3,4};
  int* ptr = (int*)malloc(10*4);
  *ptr = arr[1];
    printf("%d",*ptr);
    return 0;

}