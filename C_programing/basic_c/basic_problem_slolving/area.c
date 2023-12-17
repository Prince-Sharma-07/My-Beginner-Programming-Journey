#include <stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    printf("Enter the first coordinate : ");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter the second coordinate : ");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter the third coordinate : ");
    scanf("%lf%lf",&x3,&y3);
    double m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2/(x3-x2));
    if(m1==m2){
    printf("Coordinates lie on a straight line");
    } 
    else{
    printf("Coordinates do not lie on a straight line");
    }
    return 0;
}