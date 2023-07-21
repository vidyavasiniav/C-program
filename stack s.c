#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
struct node
{
    int data;
    struct node*next;
}*top=NULL,*newnode,*temp;
int main()
{
    int choice;
    while(1)
    {
        printf("\n");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.exit\n");
        printf("Enter your choice : ");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
void push()
{
    int n,i;
    printf("Enter the no of nodes to be inserted : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode =(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("%d",top->data);
        top=top->next;
        free(temp);
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("%d",top->data);
    }
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

