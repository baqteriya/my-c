#include<stdio.h>

int main()
{
    int r,a,c;
    printf("enter the radius");
    scanf("%d",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("\n area of circle=%d",a);
    printf("\n circumference of circle=%d",c);
    return(0);
}
