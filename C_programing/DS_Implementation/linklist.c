#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*newnode, *temp, *prev, *head=NULL; 

int count = 0;

void create();
void insert_at_beg();
void insert_at_pos();
void insert_at_end();
void delete_at_beg();
void delete_at_pos();
void delete_at_end();
void display();
void elements();


void create(){
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter your data : \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head = newnode;
    }
    else{
        temp=head;
        while(temp->next!= NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    printf("linked list created succesfully!!!\n");
}

void insert_at_beg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the data you want to insert at beg\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    printf("Your data is inserted at the beg\n");
}

void insert_at_pos(){
    int k, n = 0;
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    
    printf("Enter the data which you want to insert: ");
    scanf("%d", &newnode->data);

    printf("Enter the position at which you want to insert the data: ");
    scanf("%d", &k);

    prev = NULL;
    temp = head;

    while (temp != NULL) {
        n++;
        if (n == k) {
            if (prev != NULL) {
                prev->next = newnode;
                newnode->next = temp;
            }
         else {
                newnode->next = head;
                head = newnode;
            }
            printf("Your data is inserted at position: %d\n", k);
            return;
        }     
        prev = temp;
        temp = temp->next;
    }

    printf("NODE NOT FOUND\n");
    free(newnode);
}


void insert_at_end(){
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the data you want to insert at end\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=newnode;
    temp=newnode;
    }
    printf("Your data is inserted at the end\n");
}

void delete_at_beg(){
    if(head==NULL){
        printf("Linked list is empty\n");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
    printf("One node is deleted at beg\n");
}

void delete_at_pos(){
    int pos;
    printf("Enter the pos at which you want to delete: \n");
    scanf("%d",&pos);
            if(pos==0){
                delete_at_beg();
                return;
            }   
            temp=head;
            int current_pos = 0;
           while(current_pos<pos-1){
            temp = temp->next;
            current_pos++;
           }
           prev=temp->next;
          temp->next=prev->next;
           free(prev);
           printf("One node deleted from end\n");
}

void delete_at_end(){
    if(head == NULL || head->next==NULL){
        printf("Linked list is completely empty!!!\n");
        head=NULL;
            }
            else{
                for(temp=head; temp->next!=NULL; prev=temp, temp=temp->next);
                prev->next=NULL;
                free(temp);
                printf("One Node deleted from the end\n");
            }
            
}

void elements(struct node* head){
        if(head==NULL){
             printf("The number of elements in linked list = %d\n",count);
            return;
        }
        else{
            count++;
            return elements(head->next);
        }
}

void display(){
if(head==NULL)
{
    printf("Linked list is empty\n");
}
else
{
    temp=head;
    printf("The Linked list is: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
}

 int main(){
    int choice;
    while(choice!=9){
    printf("\nEnter the operation which you want to perform: \n");
    printf("1.Create\n2.Insert_at_beg\n3.Insert_at_pos\n4.Insert_at_end\n5.Delete_at_beg\n6.Delete_at_pos\n7.Delete_at_end\n8.Count_Elements\n9.Display\n10.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            create();
            break;
        }
       case 2:{
             insert_at_beg();
             break;
       }
       case 3:{
            insert_at_pos();
            break;
       }
         case 4:{
            insert_at_end();
            break;
         }
        case 5:{
            delete_at_beg();
            break;
        }
       case 6:{
            delete_at_pos();
            break;
       }
        case 7:{
            delete_at_end();
            break;
        }
        case 8:{
            elements(head);
            break;
            }
        case 9:{
            display();
            break;
        }
        case 10:{
            printf("Exiting...\n");
            break;
        }
        default:{
        printf("Please enter a valid choice\n");
        }
    }
    }
    return 0;
}