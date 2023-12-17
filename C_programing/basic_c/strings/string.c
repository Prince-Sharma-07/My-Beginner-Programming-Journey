#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("plz enter your name\n");
    gets(str);
    printf("nice to meet you %s , how can i assist you today?\n",str);
    gets(str);
    printf("Ok what is your QID?\n");
    gets(str);
    printf("Thanks for providing you QID, PLZ verify, your ID is %s",str);
    return 0;
}
