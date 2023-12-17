#include<stdio.h>
#define max 6
int front=-1,rear=-1,q[max];

void Enqueue(int no){
      if(front==-1 && rear == -1){
        front = 0;
        rear = 0;
         q[rear]=no;
      }
      else if((rear+1)%max==front){
        printf("Overflow!!!\n");
        return;
      }
      else{
           rear = (rear+1)%max;
           q[rear]=no;
      }
      printf("Number inserted\n");
      return;
}

void Dequeue(){
      if(front==-1 && rear == -1){
        printf("underflow\n");
      }
      else {
        printf("%d is deleted\n",q[front]);
        front=(front+1)%max;
      }
      return;
}

void Show(){
    int i=front;
    if(front==-1&&rear==-1) printf("Queue is empty: \n");
  printf("The elements are: \n");
  for(i= front; i!=rear; i=(i+1)%max){
    printf("%d ",q[i]);
  }
  printf("%d ",q[i]);
  printf("\n");
  return ;
}

int main(){
    int choice,item;
    while(choice!=4){
        printf("Enter a choice:\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                printf("Enter a Number:\n");
                scanf("%d",&item);
                Enqueue(item);
                break;
            }
            case 2:{
                Dequeue();
                break;
            }
            case 3:{
                Show();
                break;
            }

            case 4:{
            printf("Exiting...");
            break;
            }

            default:{
               printf("Enter a valid choice: \n");
            }
        }
    }
    return 0;
}