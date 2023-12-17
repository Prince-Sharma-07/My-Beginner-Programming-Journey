#include<stdio.h>
#include<stdlib.h>
int main () {
int* ptr;
int n;
printf("enter the number \n");
scanf("%d",&n);
ptr = (int*)malloc(n*sizeof(int));
if(ptr==NULL){
    printf("memory not allocated\n");
    exit(0);
}
else printf("memory is allocated");
return 0;
}
