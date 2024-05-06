#include<stdio.h>
#include<math.h>

 void main()
 {
    float p,r,t,ci;
     printf("enter the principle");
     scanf("%f",&p);
     printf("\n enter the rate");
     scanf("%f",&r);
     printf("\n enter the time");
     scanf("%f",&t);
     ci=(p*r*t)/100;
     printf("\n compound interest=%f",ci);
     return(0);

 }
