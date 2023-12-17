#include<stdio.h>
#define max 50
int top=-1;
int stack[max];

void push();
void pop();
void display();

void push(){
    if(top==max-1){
        printf("stack is full\n");
        return;
    }
     int item;
    printf("Enter the element: \n");
    scanf("%d",&item);
    if(top==-1){
        top++;
        stack[top]=item;
        top++;
     }
     else{
        stack[top]=item;
        top++;
     }
     printf("One Element is pushed:\n");
}

void pop(){
    if(top==-1){
        printf("Stack is empty:\n");
    }
    else{
        int n = stack[top];
        top--;
        printf("%d is Poped from the stack\n",n);
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty:\n");
    }
    else
    printf("Element in your stack are: \n");
    for(int i = 0; i<top; i++){
        printf("%d\n",stack[i]);
    }
}

int main(){
    int choice;
    while(choice!=4){
     printf("Select the operation you want to perform on stack: \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
     scanf("%d",&choice);
     switch(choice){
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            printf("Exiting...\n");
            break;
        }
     }
    }
    return 0;
}