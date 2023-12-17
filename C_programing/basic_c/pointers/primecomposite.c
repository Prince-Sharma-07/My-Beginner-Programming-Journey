#include <stdio.h>
int main()
{
    int n;
    printf("enter the no ");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            break;
            a=1;
        }
    }
    if(n==1){
        printf("number is neither prime nor composite");
        }
    
       else if(a==0){
            printf("the given number is prime\n");
            }
        else {
            printf("the given number is composite");
    }
}
int prince(){
    printf("again fill the same");
    main();
    return 0;
}
   