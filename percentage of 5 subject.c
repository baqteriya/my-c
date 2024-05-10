#include<stdio.h>
int main()
{
int percentage ;
int marks[5],i,total=0;
printf("enter 5 subjects marks:\n");
for(i=0;i<5;i++)
{
    scanf("%d\n",& marks[i]);
}
for(i=0;i<5;i++)
{
    total=total+marks[i];
}
percentage=(total/500)*100;
printf("\n total marks%d",total);
printf("\n percentage%f",percentage);
return(0);
}
