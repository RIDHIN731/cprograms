#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d_interest;
    printf("enter a amount:");
    scanf("%f",&a);
    printf("enter b of interest(in%):");
    scanf("%f",&b);
    printf("enter the c period(in year):");
    scanf("%f",&c);
    b/b/100;
    d_interest+a*pow((1+b),c)-a;
    printf("d interest;%2f\n",d_interest);
    printf("total amount ;&2f\n",a+d_interest);
    return 0;
    
}