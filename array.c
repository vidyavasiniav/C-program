#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    int b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int c=a[i]+a[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==c || a[i]+a[j]+a[j+1]==c ||a[i]==c)
            {
                count++;
                a[i]=-1;
                a[j]=-1;
            }
        }
    }
    //printf("%d\n",count);
    if(count==b)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
    }
}
