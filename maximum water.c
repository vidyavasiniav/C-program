#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*temp,*newnode;

int main()
{
    int n,i;
    scanf("%d",&n);
    int count=0;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
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
        }
    }
    temp=head->next;
    while(temp->next!=NULL)
    {
        count++;
    }
    printf("%d",count);
}
