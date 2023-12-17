#include <stdio.h>
#include <stdlib.h>
int main ()
{
int* ptr = (int*) malloc (400*sizeof(int));

printf("%d",*ptr);
   return 0;
}