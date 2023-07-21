#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head1,*tail1,*temp1,*newnode,*head2,*tail2,*temp2,*head,*tail,*temp;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",newnode->data);
        newnode->next=NULL;
        if(head1==NULL)
        {
            head1=newnode;
            tail1=newnode;
        }
        else
        {
            tail1->next=newnode;
            tail1=newnode;
        }
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",newnode->data);
        newnode->next=NULL;
        if(head2==NULL)
        {
            head2=newnode;
            tail2=newnode;
        }
        else
        {
            tail2->next=newnode;
            tail2=newnode;
        }
    }
    temp1=head1;
    temp2=head2;
    if(temp1->data < temp2->data)
    {
        head=tail=temp1;
        temp1=temp1->next;
        tail->next=NULL;
    }
    else
    {
        head=tail=temp2;
        temp2=temp2->next;
        tail->next=NULL;
    }
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data < temp2->data)
        {
            tail->next=temp1;
            tail=temp1;
            temp1=temp1->next;
            tail->next=NULL;
        }
        else
        {
            tail->next=temp2;
            tail=temp2;
            temp2=temp2->next;
            tail->next=NULL;
        }
    }
    if (temp1!=NULL)
    {
        tail->next=temp1;
    }
    else
    {
        tail->next=temp2;
    }
    printf("The elements are :\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

