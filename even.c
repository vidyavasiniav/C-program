#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*tail,*temp,*newnode,*temp1;
int main()
{
    int n,i;
    scanf("%d",&n);
    int count=0;
    for(i=0;i<n;i++)
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
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            count++;
            temp1=temp;
            temp=temp->next;
            free(temp1);
        }
        else
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
    printf("count : %d",count);
}
