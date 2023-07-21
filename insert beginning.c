#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void insertb();
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
        printf("5.Exit\n");
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
            insertb();
            break;
        case 5:
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
}
void insertb()
{
    printf("insert at beginning");

}
