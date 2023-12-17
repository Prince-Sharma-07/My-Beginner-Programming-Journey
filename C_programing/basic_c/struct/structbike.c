#include<stdio.h>
#include<string.h>
int main(){
   struct bike{
    char name[20];
     int engine;
     float power;
     char model[10];     
   }ninja;

   strcpy(ninja.name,"NINJA KAWASAKI H2R");
   ninja.power=200.4;
   ninja.engine=998;
   strcpy(ninja.model,"H2R");

   printf("%s\n",ninja.name);
   printf("%f\n",ninja.power);
   printf("%d\n",ninja.engine);
   printf("%s\n",ninja.model);
    return 0;
}