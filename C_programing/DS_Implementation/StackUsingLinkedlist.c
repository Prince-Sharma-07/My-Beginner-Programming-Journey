#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*newnode,*temp,*top=NULL;

void push(){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory not allocated!!!");
        return;
    }
    printf("Enter the element you want to push: \n");
    scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
    printf("One Element Pushed in the stack!!!\n");
    return;
}

void pop(){

    if(top==NULL){
        printf("UNDERFLOW!!!\n");
        return;
    }
 else{
    temp=top;
    top=top->next;
    printf("%d Popped from the stack!!!\n",temp->data);
    free(temp);
 }
 return;
}

void peek(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    else
    printf("Item on the top is %d\n",top->data);
    return;
}

void display(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    else
    printf("The elements are: \n");
    for(temp=top; temp!=NULL; temp=temp->next){
    printf("%d ",temp->data);
    }
    return;
}

int main(){
   int choice;
   while(choice!=5){
    printf("\nEnter your Choice\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
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
            peek();
            break;
        }
        case 4:{
            display();
            break;
        }
        case 5:{
            printf("Exiting...\n");
            break;
        }
        default:{
          printf("Enter a valid choice!!!\n");
        }
    }
   }
   return 0;
}