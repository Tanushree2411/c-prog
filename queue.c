#include<stdio.h>
//#include "queue.h"

void enQueue();
void deQueue();
void display();
int n=5,queue[5],front=-1,rear=-1,element;


void main()
{
    int choice;
  
    while(choice!=4)
    {
       printf("Queue Operation :\n");
       printf("1.Insert an element in the Queue\n2.Delete an element from the Queue\n3.Display elements of Queue\n4.Quit\n");
       scanf("%d",&choice);
       switch(choice)
       {
          case 1:
            enQueue();
            break;
          case 2:
            deQueue();
            break;
          case 3:
            display();
            break;
          case 4:
            printf("Thank You..\n");
            break;
          default:
            printf("Enter valid choice\n");
       }
    }
}
void enQueue()
{
   int element;
   if(rear==n-1)
   {
     printf("Queue Overflow\n");
   }
  
   else
   {
     if(front==-1)
     {
        front=0;
     }
     printf("Enter an element to insert :\n");
     scanf("%d",&element);
     rear++;
     queue[rear]=element;
     printf("Element %d is inserted\n",element);
   }
}

void deQueue()
{
   if(front==-1 && rear==-1)
   {
      printf("Underflow\n");
     
   } 
   else if(front==rear)
   {
      printf("front and rear pointer pointing to the same element so set both pointer to -1\n");
      printf("Deleted element from the queue is : %d\n",queue[front]);
      front=rear=-1;
   }
   else if(front==n)
   {
     front=0;
   }
   else
   {
      printf("Deleted element from the queue is : %d\n",queue[front]);
      front++;
   }
}
void display()
{
   if(front==-1)
   {
      printf("Queue is empty\n");
   }

   else
   {
      printf("Queue elements are :\n");
      for(int i=front;i<=rear;i++)
      {
         printf("%d ",queue[i]);
      }
      printf("\n");
   }
}
