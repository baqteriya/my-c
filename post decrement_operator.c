#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    y=x--;
    printf("\n value of x after post-decrement operator%d ",x);
    printf("\n value of y after post-decrement operator%d",y);
    return(0);
}
