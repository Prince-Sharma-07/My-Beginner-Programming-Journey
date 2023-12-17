#include<stdio.h>
int main ()
{
    int marks[10];
    for(int i=0; i<=9; i++){
        printf("enter marks of roll no %d\n",i+1);
        scanf("%d",&marks[i]);
    } 
      for(int i=0; i<10; i++){
      if(marks[i]<35){
        printf("roll no %d\n",i);
      }
      }
   
return 0;
}
