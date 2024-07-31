#include<stdio.h>
int mani(){
    float a,rate,time,interest;
    printf("enter amount:");
    scanf("%f",&a);
    printf("enter rate of interest(in%):");
    scanf("%f",&rate);
    printf("enter the time period (in year):");
    scanf ("%f",&time);
    interest=(a*rate*time)/100;
    printf("simple iterst;%2f\n",interest);
    printf("total amount;%2f\n",a,interest);
    return 0;
}