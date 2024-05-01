#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    y=x++;
    printf("\n value of x after post increment operater%d",x);
    printf("\n value of y after post increment operater%d",y);
    return(0);
}
