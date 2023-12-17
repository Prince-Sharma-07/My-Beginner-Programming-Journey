#include<stdio.h>
#define max 50
int queue[max],front=-1,rear=-1;

void enqueue(){
    if(rear==max-1){
        printf("Overflow\n");
        return;
    }
    int item;
    printf("Enter a number: \n");
    scanf("%d",&item);
    if(rear==-1){
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else{
        rear++;
        queue[rear]=item;
    }
    printf("Enqueued Succesfully\n");
    return;
}

void dequeue(){
    int item;
    item = queue[front];
     if(rear==-1){
        printf("underflow!!!\n");
    }
    if(front==rear){
        front=-1;
        rear=-1;
    }
         front++;
          printf("%d is dequeued\n",item);
          return;
}

void display(){
    if(rear==-1){
        printf("Queue is empty: \n");
        return;
    }
    printf("The Elements are: \n");
    for(int i=front; i<=rear; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
    return;
}

int main(){
    int choice;
    while(choice!=4){
     printf("Enter a choice:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
     scanf("%d",&choice);
        switch(choice){
            case 1:{
                enqueue();
                break;
            }
            case 2:{
                dequeue();
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
            default:{
                printf("Enter a valid choice\n");
            }
        }
     }
     return 0;
}