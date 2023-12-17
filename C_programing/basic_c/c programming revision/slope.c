#include<stdio.h>
int main()
{ 
    int x1,y1,x2,y2,x3,y3;
    float m1,m2;
    printf("enter the coordinates:\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    m1 = y2-y1/x2-x1;
    m2 = y3-y2/x3-x2;
    if(m1==m2){
    printf("It is a straight line\n");
    }
    else{
    printf("It is not a straight line");
    }
    return 0;
}