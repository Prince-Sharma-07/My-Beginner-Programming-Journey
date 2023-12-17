#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("enter str");
    scanf("%[^\n]s",str);
    puts(str);
    return 0;
}