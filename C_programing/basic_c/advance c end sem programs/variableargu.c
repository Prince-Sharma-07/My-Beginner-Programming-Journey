#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("number of arguments %d\n",argc);
printf("arguments:\n");
    for(int i=0; i<argc; i++){
        printf("%d:%s",i,argv[i]);
    }
return 0;
}