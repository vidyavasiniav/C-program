#include<stdio.h>
int main()
{
int n,a;
int i,j;
printf("Enter the no of elements in an array\n");
scanf("%d",&n);
int b[n];
printf("Enter the elements in an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("Enter the target number\n");
scanf("%d",&a);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(b[i]+b[j]==a)
        {
            printf("(%d,%d)\n",b[i],b[j]);
        }
    }
}
if(b[i]+b[j]!=a)
    {
    printf("pair not found");
}

}
