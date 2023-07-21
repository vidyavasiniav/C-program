#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10],i,j;
    int count=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    printf("Count : ");
    printf("%d",count);
}
