#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],n,i,j,front=-1,rear=-1;
void enqueue();
void dequeue();
void peek();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        }
    }
    return 0;
}
void enqueue()
{
    int m;
    scanf("%d",&m);
    if(front==-1&& rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=m;
    }
    else if((rear+1)%MAX==front)
    {
        printf("Overflow");
    }
    else
    {
        rear=(rear+1)%MAX;
        queue[rear]=m;
    }

}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty.");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d is deleted",queue[front]);
        front=(front+1)%MAX;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
void display()
{
    i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty.");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%MAX;
        }
        printf("%d",queue[i]);
    }
}


