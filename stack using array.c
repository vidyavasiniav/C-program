#include<stdio.h>
#include<stdlib.h>
int stack[10],i,j,top=-1;
void push();
void pop();
void peek();
void display();
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
    int n,m;
    printf("Enter the no of nodes to be inserted : ");
    scanf("%d",&n);
    if(top==n)
    {
        printf("Overflow");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&m);
            top++;
            stack[top]=m;
        }
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d is deleted",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
void display()
{
    for(i=top; i>=0; i--)
    {
        printf("%d\n",stack[i]);

    }
}
