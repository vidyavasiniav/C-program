#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void rotate();
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*tail,*newnode,*temp,*temp1;
int main()
{
     int choice;
    while(1)
    {
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.rotate\n");
        printf("4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            rotate();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}
void create()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
}
void display()
{
    printf("The elements are :\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void rotate()
{
    head->prev=tail;
    tail->next=head;
    head=tail;
    temp=tail->prev;
    temp->next=NULL;
    tail->prev=NULL;

}

