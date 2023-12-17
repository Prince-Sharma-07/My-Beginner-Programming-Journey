#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int *)calloc(1,sizeof(int)); 
        printf("%d ", ptr[0]); 

    printf("\n");
    free(ptr); 
    return 0;
}
