#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void peek();
void display();
struct node
{
    int data;
    struct node*next;
}*front=NULL,*rear=NULL,*newnode,*temp;
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
    int n,i;
    printf("Enter the no of nodes to be inserted : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode =(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(front==NULL && rear==NULL)
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
    }
}
void dequeue()
{
    temp=front;
    if(front==NULL)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("%d is deleted",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==NULL)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("%d",front->data);
    }
}
void display()
{
    temp=front;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}


