#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
}*newnode,*temp,*head=NULL;

void insert_at_beg();
void insert_at_pos();
void insert_at_last();
void del_at_beg();
void del_at_pos();
void del_at_last();
void display();

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
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter an element: \n");
    scanf("%d",&newnode->data);
    if(head==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
        temp=newnode;
    }
    else{
        newnode->next=NULL;
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }
    printf("NODE INSERTED AT END!!!\n");
    return;
}

void display(){
    for(temp=head; temp!=NULL; temp=temp->next){
        printf("%d->",temp->data);
    }
    printf("NULL\n");
}

int main(){
    int choice;
    while(choice!=8){
        printf("Enter a choice: \n1.Insert_Beg\n2.Insert_Pos\n3.Insert_last\n4.Del_Beg\n5.Del_Pos\n6.Del_Last\n7.Display\n8.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                insert_at_beg();
                break;
            }
            case 2:{
                insert_at_pos();
                break;
            }
            case 3:{
                insert_at_last();
                break;
            }
            case 4:{
                del_at_beg();
                break;
            }
            case 5:{
                del_at_pos();
                break;
            }
            case 6:{
                del_at_last();
                break;
            }
            case 7:{
                display();
                break;
            }
            case 8:{
                printf("Exiting...");
                break;
            }
        }
    }
    return 0;
}