#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
}*head,*tail,*temp,*newnode,*slow,*fast,*head1,*head2;
int main()
{
  int n,i;
  scanf("%d",&n);
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
      tail->next=head;
    }
  }
  head1=head;
  slow=head;
  fast=head;
  while(fast->next!=head && fast->next->next!=head)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  head2=slow->next;
  slow->next=head1;
  tail=fast;
  tail->next=head2;
  temp=head1;
  printf("List 1: ");
  do
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
  while(temp!=head1);
  printf("\n");
  temp=head2;
  printf("List 2: ");
  do
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
  while(temp!=head2);
}
