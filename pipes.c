#include<stdio.h>
int main()
{
    int n,m,r;
    scanf("%d %d %d",&n,&m,&r);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int inpipe=0,outpipe=0;
    for(int k=0;k<n;k++)
    {
        inpipe+=a[k]-r;
    }
    for(int l=0;l<m;l++)
    {
        outpipe+=b[l]-r;
    }
    if(inpipe == outpipe)
    {
        printf("Balanced");
    }
    else if(inpipe > outpipe)
    {
        printf("-%d",(inpipe-outpipe)+r);
    }
    else if(inpipe < outpipe)
    {
        printf("%d",(outpipe+inpipe)+r);
    }
}
