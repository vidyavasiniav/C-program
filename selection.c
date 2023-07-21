#include<stdio.h>
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   int i,j,k,l;
   for(i=0;i<n;i++);
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(k=0;k<n;k++);
   {
       for(l=1;l<m;l++)
       {
           if(a[k][l]>=a[k+1][l])
           {
               printf("%d %d\n",a[k][l],a[k+1][l]);
           }
       }
   }

}

