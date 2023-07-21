#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=3;i<=n;i++)
    {
        a[1]=a[2]=1;
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d",a[n]);
}
