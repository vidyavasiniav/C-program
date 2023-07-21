#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert();
void delete();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*tail;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Create\n");
        printf("2.Display\n");
        //printf("3.insert\n");
        printf("3.delete\n");
        printf("4.exit\n");
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
            delete();
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
    printf("Enter the no of nodes : ");
    scanf("%d",&n);
    printf("enter the elements : ");
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {

            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
    }
}
void display()
{
    temp=head;
    do
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
        /*temp=head;
    while(temp->next!=head)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    printf("\n%d",temp->data);*/

}

void delete()
{
    temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
}
