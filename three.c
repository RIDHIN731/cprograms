#include<stdio.h>
main(){
    int a=47,b=44,c=55;
    printf("enter first number: ");
    scanf("%d"&a);
    printf("enter second number:");
    scanf("d%",&b);
    printf("enter third number");
    scanf("%d"&c);
    if(a>=b&&a>c){
    large=a;
    }elseif (b>=a&&b>=c){
    large=b;
    else{
        large=c;
    }
}