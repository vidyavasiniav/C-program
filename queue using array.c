#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE],n,i,j,front=-1,rear=-1;
void enqueue();
void dequeue();
void peek();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("\n");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("\n%d",&choice);
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
    printf("Enter the no of nodes to be inserted : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(rear==SIZE-1)
        {
            printf("Queue is full.");
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
            scanf("%d",&m);
            queue[rear]=m;
        }
        else
        {
            rear++;
            scanf("%d",&m);
            queue[rear]=m;
        }
    }
}
void dequeue()
{
    if(rear==-1)
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
        front++;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
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
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}
