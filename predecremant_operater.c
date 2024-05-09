#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    y=--x;
    printf("\n value of x after pre-decrement operator%d",x);
    printf("\n value of y after pre-decrement operator%d",y);
    return(0);
}
