#include<stdio.h>
int main()
{
    int a1,b1,c1,d1,e1,a2,b2,c2,d2,e2;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&b1,&c1,&d1,&e1,&a2,&b2,&c2,&d2,&e2);
    int car1,car2;
    car1=c1+(((d1/a1)*b1)*60)+(60*e1);
    car2=c2+(((d2/a2)*b2)*60)+(60*e2);
    if(car1 == car2)
    {
        printf("Equal");
    }
    else if(car1 < car2)
    {
        printf("Petrol");
    }
    else if(car1 > car2)
    {
        printf("Diesel");
    }
}
