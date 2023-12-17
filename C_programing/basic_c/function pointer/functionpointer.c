#include <stdio.h>
int main (int argc, char *argv[]){
printf("number of arguments %d\n",argc);
printf("arguments values\n");
for(int i=0; i<argc; i++){
    printf("arguments %d : %s\n",i+1,argv[i]);

}
return 0;

}

