#include<stdio.h>

int main()
{
    int p,r,t,si;
    printf("enter the principle");
    scanf("%d",&p);
    printf("\n enter the rate");
    scanf("%d",&r);
    printf("\n enter the time");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("\n simple interest=%d",si);
    return(0);
}
