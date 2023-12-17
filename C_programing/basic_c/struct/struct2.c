#include<stdio.h>
int main(){
    struct data{
        char name;
        int roll_no;
        float percent;
    };
    struct data vasvi;
    vasvi.roll_no = 4;
    vasvi.percent = 98.7;
    printf("%d\n",vasvi.roll_no);  
    printf("%f",vasvi.percent);
}   
