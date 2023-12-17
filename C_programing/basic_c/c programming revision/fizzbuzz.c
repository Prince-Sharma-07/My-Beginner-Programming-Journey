#include <stdio.h>
void fizzBuzz(int n) {
    if(n%3==0&&n%5==0){
        printf("FizzBuzz\n");
    }
        if(n%3==0&& n%5!=0){
            printf("Fizz\n");
        }
        else if(n%5==0&&n%3!=0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n",n);
        }
        return;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
    fizzBuzz(i);
    }
    return 0;
}