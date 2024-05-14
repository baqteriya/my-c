#include<stdio.h>
int sum();
int main()
{
    int s=sum();
    printf("\n sum of number%d",5);
    return 0;
}
int sum()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}
