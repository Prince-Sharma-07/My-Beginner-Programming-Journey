#include<stdio.h>
#include<string.h>
int main(){
    typedef struct students{
        char name[40];
        char section;
        int roll_no;
    }students;

students class[4];
strcpy(class[0].name,"prince");
class[0].section='A';
class[0].roll_no=10;

strcpy(class[1].name,"vasvi");
class[1].section='A';
class[1].roll_no=11;

strcpy(class[2].name,"anishk");
class[2].section='A';
class[2].roll_no=10;

strcpy(class[3].name,"paras");
class[3].section='A';
class[3].roll_no=13;

for(int i=0; i<4; i++){
    printf("\n");
    printf("Name: %s\n",class[i].name);
    printf("Section: %c\n",class[i].section);
    printf("Roll_no: %d\n",class[i].roll_no);
}
    return 0;
}