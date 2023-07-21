#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void insert_at_front();
void insert_at_end();
void insert_at_middle();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int choice;
    while(1)
    {
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.Insert at beginning\n");
        printf("5.Insert at end\n");
        printf("6.Insert at middle\n");
        printf("7.Exit\n");
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
            count();
            break;
        case 4:
            insert_at_front();
            break;
        case 5:
            insert_at_end();
            break;
        case 6:
            insert_at_middle();
            break;
        case 7:
            exit(0);
            break;
        }
    }
}
void create()
{
    int n,i;
    printf("Enter the size : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("\n");
}
void display()
{
    printf("The elements are :\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    printf("\n");
}
void count()
{
    printf("count : ");
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("%d\n",count);
    printf("\n");
}
void insert_at_front()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
    printf("\n");
}
void insert_at_end()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    printf("\n");
}
void insert_at_middle()
{
    int position,i;

    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter position : ");
    scanf("%d",&position);
    printf("Enter the data to be inserted : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    for(i=1;i<position;i++)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=temp->next->next;
    printf("\n");
}
