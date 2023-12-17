#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
}*newnode,*temp,*head=NULL;

void insert_at_beg(){
    newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter the no you want to insert: \n");
     scanf("%d",&newnode->data);
     if(head==NULL){
       newnode->next=NULL;
       newnode->prev=NULL;
       head = newnode;
     }
     else{
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
     }
}

void insert_at_last(){
    
}

void display(){
    for(temp=head; temp!=NULL; temp=temp->next){
        printf("%d->",temp->data);
    }
    printf("NULL");
}

int main(){
    insert_at_beg();
    insert_at_beg();
    insert_at_beg();
    insert_at_beg();
    display();
    return 0;
}