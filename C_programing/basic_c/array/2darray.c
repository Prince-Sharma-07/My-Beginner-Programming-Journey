#include <stdio.h>
#include <conio.h>
int main ()
{
int n;
printf("enter the number of lines \n");
scanf("%d",&n);
int m;
printf("enter the number of colunms\n");
scanf("%d",&m);

for( int i=1; i<=n; i++){
    for( int j=1; j<=i; j++){
        printf("*");
    }
printf("\n");
}
return 0;
}
