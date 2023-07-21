#include<stdio.h>
int main()
{

    int x=11,y=8,i=0;
    int a=0;
    do{

        if(x%2==0)
        {
            y++;
        }
        if(y%2==0)
        {
            x++;

        }
        a++;
    }while(y+x<=78);
    printf("%d",a);
}
