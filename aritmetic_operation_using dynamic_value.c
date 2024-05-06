#include<stdio.h>

int main()
{
    int a,b;
    int sum,subtract,multiply,division;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("\n enter the value of b=");
    scanf("%d",&b);
    sum=a+b;
    subtract=a-b;
    multiply=a*b;
    division=a/b;
    printf("sum of a and b=%d",sum);
    printf("\n subtract of a and b=%d",subtract);
    printf("\n multiply of a and b=%d",multiply);
    printf("\n division of a and b=%d",division);
    return(0);
}
