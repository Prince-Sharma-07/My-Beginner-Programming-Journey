#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
int* x=&y;
cout<<*x+1<<endl<<*x+2;
}