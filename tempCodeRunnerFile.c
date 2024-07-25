# include <stdio.h>
intmain(){
    float principal,rate,time,interest;


    printf("Enter principal amount:");
    scanf("%f",&principal);
    printf("enter intrest rate(in %):");
    scanf("%f",&rate);
    printf("enter time period(in years):");
    scanf("%f",&time);
    interest=(principal*rate*time)/100;
    printf("simple intrest:%.2f\n",interest);


    
    return 0;
}